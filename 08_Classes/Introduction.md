# Class

A class in C++ is a user defined data type. It can have data and functions.

That sounds a little abstract, so let's look at an example of a class.

Let's create a type called 'Student', we'll base it on the previous programming quiz.

We would like to have the information associated with each student. So let's say our Student data type has:

* a name
* an id number
* a graduation date
These three are members of Student.
```
class Student
{
        string name;
        int id;
        int gradDate;
};
```
The nice thing about C++ classes, the default is to make all members private.
This means only other members of the class can access the data.

That sounds bad.... we have a data type with data that we can't access. But, remember, I said C++ classes can have functions as well as data.

**We can use functions to access the data in a class.**

Functions that access and/or modify data values in classes are called mutators.
Check this page to learn more about Mutators

Now let's add the setName function (functions in classes are also called methods) to our Student class. Recall the default for members in a class is private. We want the access functions to be public.
So we add the keyword "public" and all members listed after it are accessible:
```
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string name);

};
```
