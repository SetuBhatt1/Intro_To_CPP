#include <iostream>
using namespace std;

int main ()
{
    //use of break and continue:
    //The break statement can be used to jump out of a loop.
    //The continue statement breaks one iteration in the loop, if a specified condition occurs, and continues with the next iteration in the loop.
  
    for (int i = 0; i <= 50; i++)
    {
      if (i % 2 == 0)
	    continue;
      else
	    cout << i << " ";   //prints odd number
    }
    
    cout<<endl;
    
    for (int i = 0; i <= 50; i++)
    {
      if (i == 10)
	    break;
      else
	    cout << i << " ";   //prints 0-9 numbers
    }
    
    return 0;
}
