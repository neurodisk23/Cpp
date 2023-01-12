C++ allows class constructors to accept parameters. These parameters will set the values of class members when the object is created.

Let's look at an example of a Constructor with Parameters

## main.cpp
```
/*Goal: examine constructors with parameters*/

#include "main.hpp"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");  
    cout<<p1.getName();
    return 0;
}
```

## main.hpp

```

#include<iostream>
#include<string>
using namespace std;

class Patient
{
    private:
        string name;
    public:
        //The constructor accepts a name parameter
        Patient(string input);
        void setName(string input);
        string getName();
};

Patient::Patient(string input)
{
    //when an object is created
    //the name must be added as a parameter
    name = input;
}

void Patient::setName(string input)
{
    name = input;
}

string Patient::getName()
{
    return name;
}
```
