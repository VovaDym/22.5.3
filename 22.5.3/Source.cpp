#include <iostream>
#include <map>
#include <string>

bool anagram(std::string& str1, std::string& str2)
{
    bool anagram = true;
    if (str1.size() == str2.size())
    {
        std::map <char, int> mapTmp1;
        for (const char ch : str1)
        {
            mapTmp1[ch] += 1;
        }
        std::map <char, int> mapTmp2;
        for (const char ch : str2)
        {
            mapTmp2[ch] += 1;
        }

        if (mapTmp1 != mapTmp2)
        {
            anagram = false;
        }
    }
    else
    {
        anagram = false;
    }
    return anagram;
}

int main()
{
    std::cout << "Enter first word: " << std::endl;
    std::string first;
    std::cin >> first;
    std::cout << "Enter second word: " << std::endl;
    std::string second;
    std::cin >> second;

    std::cout << anagram(first, second);

    return 0;
}