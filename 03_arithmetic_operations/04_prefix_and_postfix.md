In C++, as in many languages, there are postfix and prefix operators.
The form for each is:

Incrementing

* prefix: ++a
* postfix: a++ 

Decrementing

* prefix: --a
* postfix: a--
The difference between prefix and postfix is subtle, but crucial.

Prefix operators increment the value of the variable, then return the reference to the variable.

Postfix operators create a copy of the variable and increments the value of the variable. Then it returns a copy from BEFORE the increment.

As you can read in the [Increment and Decrement documentation](https://en.cppreference.com/w/cpp/language/operator_incdec)

**increment and decrement operators can result in violations of sequencing.**
