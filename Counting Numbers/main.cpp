#include <iostream>


int main() 
{
int seekedNumber, lenghtOfSequence, number, counter;
while (std::cin>>seekedNumber>>lenghtOfSequence)
{
counter=0;
for (int i=0;i<lenghtOfSequence;i++)
    {
    std::cin>>number;
    if (number==seekedNumber)
    counter++;
    }
std::cout<<counter<<std::endl;
}    
}