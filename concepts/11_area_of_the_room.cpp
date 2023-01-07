/* Goal: practice using stringstream
/* Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
  */

#include <iostream>
#include <string>
#include <sstream>

int main()
{
 
std::string dimention;

float length , breath ;

std::cout<<"Enter the length of the room \n";
std::getline(std::cin, dimention);
std::stringstream(dimention) >> length;

std::cout<<"Enter the breath of the room \n";
std::getline(std::cin,dimention);
std::stringstream(dimention) >> breath ;

std::cout<<"The area of the room is: "<< length*breath ;
return 0;

}
