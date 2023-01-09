/*

For this program, write two functions:

1. void printEquation(int m1, int m2, int sum, char operation);
2. int sum(int m1, int m2);

Put the declarations and definitions of the functions in the header file. Don't forget to add the include files to the main.hpp file.

*/

// Solution 1

#include "main.hpp"

int main()
{
    int m1 = 33; 
    int m2 = 66;
    int total = sum(m1, m2);
    printEquation(m1, m2,total,'+');
    return 0;
}

// Solution 2


#include "main.hpp"

int main()
{
    int m1 = 33; 
    int m2 = 66;
    printEquation(m1, m2,sum(m1, m2),'+');
    return 0;
}

// main.hpp

#include<iostream>

void printEquation(int m1, int m2, int sum, char operation) 
{
    std::cout<<m1<<" "<<operation<<" "<<m2<<" = " <<sum;
}

int sum(int m1, int m2)
{
    return m1 + m2;
}
