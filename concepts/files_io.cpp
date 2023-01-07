/*
STEPS 

1. Include the <fstream> library
2. Create a stream (input, output, both)
 * ofstream myfile ; ( for writing to a file )
 * ifstream myfile ; ( for reading a file )
 * fstream myfile  ; ( for reading and writing a file )

3. Open the file myfile.open("filename");
4. Write or read the file
5. Close the file myfile.close() ;
   
*/

/*
Motive:
 Change the contents of the file called input.txt
 Change the ifstream and ofstream to fstream
 
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";
    line  = "This is a char";
    //create an input stream to write to the file
    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    
    else cout << "Unable to open file for reading";
    
    return 0;
}
