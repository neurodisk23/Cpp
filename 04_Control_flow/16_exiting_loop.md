# Exiting Loop

To exit a loop before it completes its normal sequence, we need to use control statements.

The two most commonly used are:

* break
* continue
For additional reference :Break and Continue

**The break statement:**

The break statement will end the loop and begin executing the first statement that comes AFTER the end of the loop.

**The continue statement**: The continue statement will force the next iteration to be executed.

```
/*Goal: understand the break and conitnue statements*/

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";       
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";
    
    
    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";           
    }
    return 0;
}
```
