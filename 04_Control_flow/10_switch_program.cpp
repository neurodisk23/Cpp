/*
Do a switch statement with breaks between the cases. Create a program that asks the user for two float numbers. Then asks the user if they would like to:

 * Add the numbers
 * Subtract the numbers
 * Multiply the numbers
 * Divide the numbers
 
The program should then print the numbers with the chosen operation and the solution.
For example:

The user enters: 4 5 +
The program will output: 4 + 5 = 9

*/


#include <iostream>

int main()
{
    float in1, in2;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    return 0;
}


// SOLUTION
/*

#include <iostream>

int main()
{
    float in1, in2, result;
    char operation ;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>> operation;
    
    switch(operation)
    {
        
    case '+':
    {
        
       result = in1 +in2;
       std::cout<<result;
       break ;
       
    }
    
    case '-':
    {
        
       result = in1 - in2;
       std::cout<<result;
       break ;
       
    }
    
    case '*':
    {
        
       result = in1 * in2;
       std::cout<<result;
       break ;
       
    }
    
    case '/' :
    {
        
       result = in1 / in2;
       std::cout<<result;
       break ;
       
    }
    
    default :
    {
       std::cout<<"Wrong inout \n";
    
    }
    }
    return 0;
}

*/
