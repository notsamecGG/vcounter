#include <algorithm>
#include <array>
#include <iostream>
#include <string>


const char vowels[] = {'a', 'e', 'i', 'y', 'o', 'u'};

bool isVowel(char c)
{
    const char* x = std::find(std::begin(vowels), std::end(vowels), c);
    return x != std::end(vowels);
}

int main(int argc, char** argv)
{
    if (argc <= 1)
    {
        std::cerr << "You need to type atleast one word" << std::endl;
        return 1;
    }

    std::string arg = argv[1];

    int vowelCount = std::count_if(
        std::begin(arg), 
        std::end(arg), 
        isVowel
    );

    std::cout << vowelCount << std::endl;

    return 0;
}