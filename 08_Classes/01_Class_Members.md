Let's create some functions that can change the value of our data in our class called Student:

Traditionally, setDataName is the name we use to change data in a class. In our case we have three data values:

* name
* id
* gradDate
So let's create a function to change the value of name: This is just the usual C++ function. It accepts an input string and returns nothing.
```
void setName(std::string nameIn)
```
Now let's add a function to assess each of the data values in Student: An example of a class:
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
};
```
So, we can set our data but now we need to 'get' the data. Traditionally these are called get-functions.

They have the form **getDataValue.**

Get functions return the data, so get functions have the variable type as a return variable.

For example: To access the data called name, the function declaration would be:
```
string getName();
```
If we do a get function for each data member, the student class should look like this:

An example of a class:
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
```

