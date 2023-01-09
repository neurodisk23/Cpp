# Functions With Return Value

Functions with return values require the declaration and definition state the variable type of the return.
The syntax is:
```
returnVariableType functionName(parameter1, parameter2, ..., parameterN)
{
     variarble type returnVariable; 
     statement(s);
     return variable;
}
```
For example:
```
int calculateSum(int m1, int m2)
{
     int sum;
     sum = m1 + m2;
     return sum;
}
```
We can, of course, shorten this to the more succinct:
```
int calculateSum(int m1, int m2)
{
     return m1 + m2;
}
```

```
/*Goal: practice returning values from functions*/

#include<iostream>
usingnamespacestd;

floatadd( float m1,float m2);
floatsub( float m1,float m2);
floatmult( float m1,float m2);
floatdiv( float m1,float m2);

int main()
{
float m1=4.0;
float m2=3.5;
float answer;
    
answer = add(m1,m2);
cout<<m1<<"+"<<m2<<" = "<<answer<<"\n";
cout<<m1<<"-"<<m2<<" = "<<sub(m1,m2)<<"\n";
cout<<m1<<"*"<<m2<<" = "<<mult(m1,m2)<<"\n";
cout<<m1<<"/"<<m2<<" = "<<div(m1,m2)<<"\n";
return 0;
}


float add(float m1,float m2)
{
return m1+m2;
}

float sub(float m1,float m2)
{
return m1-m2; 
}
```

### Console Output
4+3.5 = 7.5 4-3.5 = 0.5 4*3.5 = 14 4/3.5 = 1.14286
