// Terminal will throw 0 

     #include <iostream>

     int main(void)
     {
         int numerator = 4;
         int denominator = 5;

         int answer = numerator / denominator;
         std::cout<<"answer = "<<answer;
         return 0;
     }


/*

/*Goal: fix the variable types problem. 
**This program outputs the wrong answer
**even though it compiles and executes without errors. 
**Fix it so that it outputs the correct value.
*/

#include <iostream>
int main(void)
{
    float numerator = 4;
    float denominator = 5;

    float answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}



*/
