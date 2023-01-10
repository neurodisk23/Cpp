The syntax for a class is:
```
class ClassName
{
      member1;
      member2;
      ...

public:
     return variable accessFunction1(function parameters);
     return variable accessFunction2(function parameters); 
      ...
} ;

returnVariable ClassName:: accessFunction1(function parameters)
{
    function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
    function statements;
}

```

As an aside, some conventions list the public definitions first, including the Google C++ Style Guide. It is best to use the convention for the group paying you to code.

**C++ Convention is:**

* Capitalize the first letter of the classname.
```
class ClassName
```
* Private members are listed first. If you do this, there is no need to use the 'private' keyword. If you list them after the public keyword, you will need to identify them using the private keyword.
```
{
      member1;
      member2;
      ...
 ```
* Use 'getVariableName' for accessing private variables Use 'setVariableName' for assigning values to private variables
public:
     return variable accessFunction1(function parameters);
     return variable accessFunction2(function parameters); 
      ...
} ;
* You will need to signify that the functions are part of the class definition by using the namespace classname::.
```
returnVariable ClassName:: accessFunction1(function parameters)
{
    function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
    function statements;
}
```
