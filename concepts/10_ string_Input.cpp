// Use of std::getline to take a string as a input from the console

// Similar can be used to get input from a text file as for from a text file named input.txt which contains a line 

/*
Executing the file on a compiler
"g++", "-o main.out", "main.cpp"
"./main.out", stdin=open("input.txt", "r")
The first statement compiles the code and names the executable file main.out. Then main.out is executed using an input file called "input.txt".
*/


#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}
