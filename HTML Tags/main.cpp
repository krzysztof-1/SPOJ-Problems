#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void transforHtmlTags(std::string text)
{   
    size_t beginOfTag, endOfTag;
    beginOfTag = text.find('<');
    while (beginOfTag != std::string::npos)
    {
        endOfTag = text.find('>', beginOfTag);
        if (endOfTag == std::string::npos) //if there is not ">" we break the function
        {
            break;
        }
        
        std::transform(text.begin() + beginOfTag, text.begin() + endOfTag + 1, text.begin() + beginOfTag, ::toupper);

        //searching for next tag
        beginOfTag = text.find('<',endOfTag);
    }
    std::cout << text << "\n";
}

int main()
{
std::string lineOfText;
while (std::getline(std::cin,lineOfText))
{
    transforHtmlTags(lineOfText);
}


return 0;
}