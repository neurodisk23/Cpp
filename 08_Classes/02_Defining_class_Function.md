Now that we have our members and functions declared, we need to define them. Here's our Student class:
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
        string getName();
        int getId();
        int getGradDate();
};
```
Now let's define the modifying function members:
```
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

```
Let's define the accessing function members:
```
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
