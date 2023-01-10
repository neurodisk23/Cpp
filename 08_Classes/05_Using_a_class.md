It is conventional to put classes in a header file. For this example we are going to put them in the main file so we can see both the main program and the class at the same time. Hopefully, this will make it a little easier to see what is going on in the program.

Notice we need to use the "dot operator" to access the public members.
For example, to get the value of the grad date in the student class we need to type:
```
studentVariableName.getGradDate();
```
There is another operator (->) that is used for accessing pointer members of a class. We will discuss that operator in the Binary Search Trees program.

```
/*Goal: Practice using a class*/

#include<iostream>
using namespace std;


class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

void Student::print()
{
     cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}

int main()
{
    int integer1; 
    float float1;
    Student student1; 
    
    integer1 = 4; //assign a value to integer1
    float1 = 4.333; //assign a value to float1

    student1.setName("Catherine Gamboa"); //assign a value to the student name
    student1.setId(54345); //assign a value to the student id number
    student1.setGradDate(2017); //assign a value to the student grad date
    
    //Let's print the values of our variables
    cout<<"integer1 = "<<integer1<<"\n";
    cout<<"float1 = "<<float1<<"\n\n";
    
    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout<<"Using the Student::print function\n";
    cout<<"Student1 = ";
    student1.print();
    cout<<"\n\n";
    
    //The second is to access each member of the class using the get functions
    cout<<"Using the student access functions\n";
    cout<<"Student1 name = "<<student1.getName()<<"\n";
    cout<<"Student1 ID = "<<student1.getId()<<"\n";
    cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";
    
    
    return 0; 
}
```

Console Output 

integer1 = 4 float1 = 4.333 Using the Student::print function Student1 = Catherine Gamboa 54345 2017 Using the student access functions Student1 name = Catherine Gamboa Student1 ID = 54345 Student1 Grad Date = 2017
