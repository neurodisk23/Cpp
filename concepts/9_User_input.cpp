/*
In C++ we use std::cout for writing to the console.

And we have std::cin for reading from the console.

*/

/*
Create a file named input.txt with just the following values 
1991
5
Bob
*/


/*



/*This program accepts inputs from the input.txt file*/ 


#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}

/*
Executing the file on a compiler

"g++", "-o main.out", "main.cpp"
"./main.out", stdin=open("input.txt", "r")

The first statement compiles the code and names the executable file main.out. Then main.out is executed using an input file called "input.txt".
*/
