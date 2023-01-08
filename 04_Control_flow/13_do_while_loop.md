# do-while loop 

C++ do ... while loops have the following syntax:
```
do
{
     statements;
}while(condition );
```
The statements are executed the first time through the loop. Then the condition is checked. This is slightly different than the while loop. Which, you may recall, required the condition to be true BEFORE entering the loop for the first time.

Below is an example of the do...while loop.

```
/*Goal: understand the do..while loop*/

#include <iostream>


int main()
{
    int count = 0;
    
    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6; 
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);
    
    return 0;
}
```
