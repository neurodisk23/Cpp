/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/


// Solution : Without using scanf


 #include <iostream>
 
 int main()

 {  int number, sum = 0;
    int max = 0;
    int min = 100 ;
     for(int i;i<15; i++)
     {
         std::cout<<"Please enter the number \n";
         std::cin>>number;
         if(number <= min )
         {
             min = number;
         }
         
         if (number >= max)
         {
              max = number;
         }
         
         sum+= number;
         
         
     }
     std::cout<<"all numbers processed .... \n";
     std::cout<<" MAX \t"<< max<<" MIN \t"<< min<<" Average \t"<< sum/15;
     
 }





