In the course so far we have been required to defined a variable's type before we could use it. We have also had to define the types for input variables of functions and classes. Let's take a look at what I am talking about, to make sure we understand the situation.

```
/*Goal: look at a program, and see if we can make it more versatile*/

#include<iostream>

int findSmallerInt(int input1, int input2);
float findSmallerFloat(float input1, float input2);
char findSmallerChar(char input1, char input2);

int main()
{
    int a = 5; 
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';
    std::cout<<findSmallerInt(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    std::cout<<findSmallerFloat(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    std::cout<<findSmallerChar(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n";
    
    return 0;
}

int findSmallerInt(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float findSmallerFloat(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char findSmallerChar(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

```
