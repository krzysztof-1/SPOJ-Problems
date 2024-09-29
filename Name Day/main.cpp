#include <iostream>

bool willThereBeCandiesLeft(unsigned sizeOfClass, unsigned numberOfCandies)
{
if (sizeOfClass == 1)
    {
    return true;
    }
else
    {
    return numberOfCandies % (sizeOfClass-1) != 0;
    }
}

int main()
{
unsigned numberOfDataSets;
std::cin >> numberOfDataSets;
unsigned sizeOfClass, numberOfCandies;
while (numberOfDataSets--)
{   
    std::cin >> sizeOfClass >> numberOfCandies;
    if(willThereBeCandiesLeft(sizeOfClass, numberOfCandies))
    {
        std::cout << "TAK" << "\n";
    }
    else    
    {                
        std::cout << "NIE" << "\n";
    }
}
return 0;
}