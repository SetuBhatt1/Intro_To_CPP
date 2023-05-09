#include <iostream>
using namespace std;

int main()
{
    //Loops --> for, while, do while
    
    //for loop to print even number from 1 to 50:
    for(int i=0; i<=50; i++)
    {
        if(i%2==0)
        cout<<i<<" ";
    }
    cout<<endl;
    
    //while loop to print even number from 1 to 50:
    int i=0;
    while((i%2==0) && (i<=50))
    {
        cout<<i<<" ";
        i=i+2;
    }
    cout<<endl;
    
    //do while loop to print even number from 1 to 50:
    i=0;
    do
    {
        cout<<i<<" ";
        i=i+2;
        
    } while((i%2==0) && (i<=50));
  
    return 0;
}
