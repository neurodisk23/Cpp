# For loop
For loops in C++ have the following form:
```
for ( declaration : range ) statement;

for (initialization; condition; increase) statement;
```

## Example 
```
/*Goal: examine a for loop example. */

#include <iostream>

int main()
{
    for(int i=0; i< 10;i++)
    {
        std::cout<<"i = "<<i<<"\n";
    }
    return 0;
}
```
