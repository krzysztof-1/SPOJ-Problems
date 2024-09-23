#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void makeNextWordsBigStartWithBigLetter (std::string& text)
{
size_t findSpace, currentPos;
findSpace = text.find(' ');
    while (findSpace != std::string::npos)
    {   
        currentPos = findSpace;
        text[findSpace+1] = toupper(text[findSpace+1]);
        findSpace = text.find(' ', currentPos+1);
    } 
}

void removeSpacesBeetwenWords (std::string& text)
{
size_t indexOfNextSpace = text.find(' ');
while (indexOfNextSpace != std::string::npos)
{   
    text.erase(indexOfNextSpace, 1);
    indexOfNextSpace = text.find(' ');
}
}

int main() 
{
std::string lineOfText;
while (getline(std::cin, lineOfText))
{
    makeNextWordsBigStartWithBigLetter(lineOfText);
    removeSpacesBeetwenWords(lineOfText);
    std::cout << lineOfText << "\n";
}


return 0;
}