/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    
    return 0;
}


// Solution

/*


#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;
    
    //Get the values of each variable
    std::cout<<"integer = \n";
    std::cin>>givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;

    std::cout<<"\n address integer "<<&givenInt;
    std::cout<<"\n address float "<<&givenFloat;
    std::cout<<"\n address Double "<<&givenDouble;
    std::cout<<"\n address string "<<&givenString;
    std::cout<<"\n address char "<< (void *)&givenChar;
    
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";
    
    
    
    
    return 0;
}


Console Output 

integer = float = double = address integer 0x7ffcf4d6e8d0 address float 0x7ffcf4d6e8d4 address Double 0x7ffcf4d6e8d8 address string 0x7ffcf4d6e8f0 address char 0x7ffcf4d6e8cfpointer of givenInt = 32 pointer of pointer of givenInt = 32



*/

