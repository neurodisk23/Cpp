Let's look at what we have so far in the student class.
```
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setgradDate(int dateIn);
};

Student::setName(string nameIn)
{
     name = nameIn;
}

Student::setID(int idIn)
{
     id = idIn;
}

Student::setGradeDate(int gradDateIn)
{
     gradDate = gradDateIn;
}
```
Our Student class is ready to use.

There is one more function member I would like to add to the class, it is not required, but it is nice to have it.

The function is called print.
This function will print all the data values in the class.
```
void print()
{
     cout<<name<<" "<<id<<" "<<gradDate;
}
``
Notice that this function prints only the data values with a space between them. It does not add a newline, or text. This is standard for C++ basic print functions. We have to think others might want to use this function and we should keep it as neutral as possible.
```
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
```
