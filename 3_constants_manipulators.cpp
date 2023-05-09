
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Constant Variable
    //Variables are made constant using the keyword 'const'
    const int x=10;
    //x=100;  throws an error as we cannot modify it
    cout<<x;
    
    //Manipulators
    //Firstly, we need to include header file 'iomanip'
    //Some functions of iomanip are : Setprecision, setw, Setfill
    
    int a = 1000;
    int b = 203;
    int c = 23;
    int d = 1;
    
    cout<<"before setw"<<endl;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    cout<<"value of c: "<<c<<endl;
    cout<<"value of d: "<<d<<endl;
    
    cout<<"after setw"<<endl;
    cout<<"value of a: "<<setw(4)<<a<<endl;
    cout<<"value of b: "<<setw(4)<<b<<endl;
    cout<<"value of c: "<<setw(4)<<c<<endl;
    cout<<"value of d: "<<setw(4)<<d<<endl;
    
    return 0;
}
