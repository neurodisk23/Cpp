#include "main.hpp"

     int main ()
      {
        float FTemp = 0;
        float CTemp = 0;

        cout << "Enter a Farenheit temperature: ";
        cin>>FTemp;

        CTemp = (FTemp - 32.0) / (9.0/5.0);
        cout << "\n"<<FTemp <<" in farenheit = " <<CTemp<<" in Celcius\n";
        return 0;
      }


/*
The header file:

main.hpp

#include<iostream>

using namespace std;
*/
