# Functions

C++ supports functions, in fact main() is nothing more than a special C++ function.

All C++ functions (except the special case of the main function) must have:

* A declaration: this is a statement of how the function is to be called.
* A definition: this is the statement(s) of the task the function performs when called
* 
C++ functions can:

* Accept parameters, but they are not required
* Return values, but a return value is not required
* Can modify parameters, if given explicit direction to do so

Function Syntax:
```
retVariableType  functionName(parameter1, parameter2, ...,parameterN)
{
     statement(s);
}
```
For example:
```
void printValues()
{
     std::cout<<"Hello World!";
}
```
This function accepts no parameters and returns no value. When it is called in a program, it will execute the statement
```
std::cout<<"Hello World!";
```
**Function Declaration:** A function is declared with the syntax:

returnVariableType  functionName(parameter1, parameter2, ...,parameterN);

**Note the semi-colon at the end of the statement.**

**Calling the function**

Functions are called using their function name with any parameters specified in the declaration and definition.

For example:
```
int main()
{
     ...
     functionName(parameter1, parameter2, ..., parameterN);
     ...
}
```
