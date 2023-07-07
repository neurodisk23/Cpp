# Cpp

### README coming soon

# Last updated : 7th July 2023

### Tips and Tricks 

* system(pause) ;  this will add a delay to the code and then stop, won't stop abruptly it'll give a prompt to press any key to continue
system("pause") is slow command, one can do the following code run
#include <iostream> // std::cout, std::cin
using namespace std;
```
int main() {
   do {
     cout << '\n' << "Press the Enter key to continue.";
   } while (cin.get() != '\n');

   return 0;
```
