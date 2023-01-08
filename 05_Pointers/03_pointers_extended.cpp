/*Goal: Find out why you care about pointers*/

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;
  
  pointerI = &number; // Stored the address of the number 
  *pointerI = 45; // as *pointeri shows 45 thus number is now 45
  
  pointerC = &character; // pointerC stores the address of the character
  *pointerC = 'f';      // Similarly character is now 'f'
  
  pointerS = &sentence;
  *pointerS = "Hey look at me, I know pointers!";
  
  std::cout << "number = "<<number<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}


/*

Console Output

number = 45 character = f sentence = Hey look at me, I know pointers!



*/
