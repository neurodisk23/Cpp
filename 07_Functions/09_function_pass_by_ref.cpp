/*

Now write a program that uses passing variables by reference.

Write a program that uses two functions:

calculate(input1, input2, operation, result);
printEquation(input1, input2, operation, result);
Input, input2, and result are floats.
Operation is a char. The choices are '+', '-', '*', '/'
The result is modified by the function called calculate.

*/

#include "main.hpp"

int main()
{
    char operation = '/';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;

    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}


/*The header file for main.cpp*/

#include<iostream>

void calculate(float in1, float in2, char op, float &ans);
void printEquation(float input1,float input2, char operation, float result);

void calculate(float in1, float in2, char op, float &ans)
{
    switch(op)
    {
        case '+': ans = in1 + in2;
                  break;
        case '-': ans = in1 - in2;
                  break;   
        case '*': ans = in1 * in2;
                  break;
        case '/': ans = in1 / in2;
                  break;
        default:  std::cout<<"Illegal operation\n";
    }
}
void printEquation(float input1,float input2, char operation, float result)
{
    std::cout<<input1<<" "<<operation<<" "<<input2<<" = "<<result<<"\n";
}


// The output of the above program:

// 9.8 / 2.3 = 4.26087
