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
floatadd(floatm1,floatm2);
floatsub(floatm1,floatm2);
floatmult(floatm1,floatm2);
floatdiv(floatm1,floatm2);
intmain()
{
floatm1=4.0;
floatm2=3.5;
floatanswer;
    
answer=add(m1,m2);
cout<<m1<<"+"<<m2<<" = "<<answer<<"\n";
cout<<m1<<"-"<<m2<<" = "<<sub(m1,m2)<<"\n";
cout<<m1<<"*"<<m2<<" = "<<mult(m1,m2)<<"\n";
cout<<m1<<"/"<<m2<<" = "<<div(m1,m2)<<"\n";
return0;
}
floatadd(floatm1,floatm2)
{
returnm1+m2;
}
floatsub(floatm1,floatm2)
{
returnm1-m2;
```

### Console Output
4+3.5 = 7.5 4-3.5 = 0.5 4*3.5 = 14 4/3.5 = 1.14286
