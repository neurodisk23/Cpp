/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/
#include<iostream>

void printProduct(int a, int b, int prod) ;
int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printProduct(m1, m2, product);
    return 0;
}
 void printProduct(int a, int b, int prod)
 {
     prod = a*b ;
     std::cout<<prod;
     
     
 }
