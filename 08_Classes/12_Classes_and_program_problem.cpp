/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

// main.hpp

#include "main.hpp"


int main()
{
    const int SIZE=3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");

    printRoster(roster,SIZE);
    return 0;
}

// main.hpp

/*The header file for main.cpp*/

#include<iostream>
#include "Dog.cpp"

using namespace std;

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
    for(int i=0;i<size;i++)
    {
        roster[i].printInfo();
        cout<<"\n\n";
    }
}

// Dog.cpp

//You may use this file as a header file for the Dog class. 
//Make sure to include it in main.hpp file

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
     name="Unknown";
}
void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}

  
