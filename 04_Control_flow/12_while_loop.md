# While Loop

**C++ has two forms of the while loop:**

* while loops
* do .. while loops

**C++ while loops syntax is:**
```
while(condition)
{
     statements;
}
```
If the condition is true, the statements within the curly brackets are executed. If the condition is false, the statements are not executed.

Below is an example of a while loop.

```
/*Goal: understand the syntax of while loops*/

#include <iostream>

int main()
{
    int entry = 0;
    
    //with this while loop the condition is true
    //so the statements are executed
    while(entry <=5)
    {
        std::cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }
    
    //with this while loop the condition is false
    //so the statements are not executed
    while(entry < 5)
    {
        std::cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }
        
    return 0;
}
```
