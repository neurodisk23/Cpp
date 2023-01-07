/*
// 1. Inlcude the stringstream Library

#include<sstream>

// 2. use getline to get the string from the suer

std::getline(std::cin, stringVariable);

// 3. Convert a string variable to a numeric variable

std::stringstream(stringVariable) >> numericVariable ;

*/

#include <iostream>
#include <string>
#inckude <sstream>

int main()
{

std::string stringLength ;
float inches = 0;
float yardage = 0 ;
 
std::cout<< "Enter the number of inches: " ;
std::getline(std::cin, stringLength); 
std::stringstream(stringLength) >> inches;
std::cout<<"You entered "<<inches<<'\n';
yardage = inches/36;
std::cout<<"yardage is "<<yardage;
return 0 ; 
}
