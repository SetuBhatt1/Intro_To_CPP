#include <iostream>
using namespace std;

int main()
{
    //reference variable
    float x = 100.01;
    float &y = x;
    
    cout<<x<<endl;
    cout<<y<<endl;
    
    //typecasting
    int a = (int)x;
    cout<<a<<endl;
    cout<<x<<endl;
    
    return 0;
}
