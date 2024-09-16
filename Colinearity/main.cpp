#include <iostream>

bool areThreePointsColinear(float x1,float y1, float x2, float y2, float x3, float y3)
{
float a1,a2;
if ((x1==x2)&&(x2==x3)||(y1==y2)&&(y2==y3)) 
    return true;
else 
    {
    a1=(y1-y2)/(x1-x2);
    a2=(y3-y2)/(x3-x2);
    return a1==a2;
    }
}

int main()
{
float x1,x2,x3,y1,y2,y3;int numberOfTests;
std::cin>>numberOfTests;
while (numberOfTests--)
{
std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
if (areThreePointsColinear(x1,y1,x2,y2,x3,y3))
std::cout<<"TAK"<<std::endl;
else
std::cout<<"NIE"<<std::endl;
}
}