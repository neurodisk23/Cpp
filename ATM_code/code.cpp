#include<iostream>
using namespace std;

class User
{
 private : 
 string name ;
 string password ;


 public :

double balance = 0 ;
 User(string a, string b)
 {
    name = a;
    password = b ; 
 }

 bool checkpassword(string pass) 
 {
    if ( pass == password) { cout << "Password Okay "<<endl ; return 1 ; }
    else { cout <<"Wrong Password "<<endl ; return 0; }
 }

bool checkname( string nam)
{
    if (nam == name){cout<<"User Name is okay "<<endl ; return 1;}
    else {cout<<"Incorrect User Name "<<endl ; return 0 ;}
}


};


int startmenu()
{
    cout<<"************ MAIN MENU ************"<<endl;
    cout<<" 1 - Balance "<<endl;
    cout<<" 2 - Deposit "<<endl;
    cout<<" 3 - Withdraw "<<endl;
    cout<<" 4 - Exit "<<endl;
    cout<<" Selection: "<<endl;

    int op;
    cin>>op;

    return op ;
}


int main(){

User u1  = User ("Harshal", "1234");

string user_name,user_passcode  ;

cout <<"Welcome to ATM application"<<endl ;
cout <<"Enter Username "<<endl;
cin >>user_name;
cout <<"Enter password" <<endl ;
cin >>user_passcode ;

if (u1.checkname(user_name) && u1.checkpassword(user_passcode))
{

start :
   int i ;
   i = startmenu();
   switch (i) {
   case 1: {cout<< "Your current account balance is "<< u1.balance <<endl; break;}
   case 2: 
   {
    double deposit ;
    cout<<"Enter the amount to deposit: ";
    cin>>deposit ;
    u1.balance += deposit;
    break;
    }
   case 3:
      {
    double withdrawn ;
    cout<<"Enter the amount to deposit: ";
    cin>>withdrawn ;
    if (withdrawn > u1.balance){cout<<"Not Enough balance"<<endl;}
    else{u1.balance -= withdrawn;}
    break;
    }
   case 4: break ;
   }

   cout <<"** Would you like to continue: **"<<endl;
   cout<<"1 - Yes"<<endl;
   cout<<"2 - No" <<endl; 
   cout<<"Please give your selection: "<<endl;
   
   int op;
   cin>>op;

   if (op == 1){ system("cls"); goto start;}
   



}

return 0;

}
