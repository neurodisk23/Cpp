/*

Execute this program. It compiles without error, but it has a major error in it. Find the error and then answer the question on the following quiz.

*/

/*What is wrong with this program?*/

#include<iostream>

void increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}

void increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";    
}


//Solution : a is not incrementing in the main

