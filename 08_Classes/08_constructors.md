# Constructors

There is a special function member that we need to talk about, constructors.

A constructor is special function that is executed whenever we create a new instance of the class. It is used to set initial values of data members of the class.

For example, in our Cats class we may want to have an initial value for the age of a cat and it's breed. If we set initial values, we do not need to require the program or user set every value.

Constructors do not return a value, including void.

The declaration for a constructor is:
```
ClassName::ClassName();
```
The definition of a constructor is:
```
ClassName::ClassName()
{
     dataMemberName1 = value;
     dataMemberName2 = value;
     ...
}
```

Code 

```
/*Goal: learn to use constructors*/


#include<iostream>
using namespace std;

//The cats class that we used earlier in the lesson. 
class Cats
{
    string name;
    string breed; 
    int age;
public:
    Cats(); //declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//defining the constructor
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}
void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}
string Cats::getName()
{
    return name;
}
string Cats::getBreed()
{
    return breed;
}
int Cats::getAge()
{
    return age;
}
void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}

//+++++++
int main()
{
    Cats cat1;
    cout<<"Cat1 information: ";
    cat1.printInfo();
    return 0;
}
```
