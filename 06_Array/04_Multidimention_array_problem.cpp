// Question

/*

*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 


#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    return 0;
}

*/

// Solution

/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{ int array[4][4] ;
int vector1[4];
int result_vector[4];
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    std::cout<<"Input the array ";
    
    for (int i = 0 ; i<4 ; i++)
    {
        for (int j = 0 ;j<4; j++)
        {
        std::cin>> array[i][j] ;
        }
    }
    
    std::cout<<"\n Input the vector" ;
    
    for(int i =0; i<=4 ; i++)
    {
        std::cin>>vector1[i];
    }
    
    
  
    
    for(int i = 0; i<4 ; i++)
    {   int sum = 0 ;
        for( int j =0 ; j<4 ;j ++)
        {
            sum+=array[i][j]*vector1[j] ;
            
        }
        
        result_vector[i] = sum;
        
    }
    
    std::cout<<"\n";
    for(int i =0 ; i<4;i++)
    {
        
        std::cout<<result_vector[i] <<"\t";
        
    }
    
    
    return 0;
}
