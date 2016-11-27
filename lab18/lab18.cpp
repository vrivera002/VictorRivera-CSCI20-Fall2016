//this program takes in some names, saves their name into a char array, then randomizes their name to give then possible user names
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string userName1;//user names that i will randomize later
    string userName2;
    string userName3;
    
    
    string senpai = "~senpai";//appended to the end of username2 later on
    
    
    //getting the user input and making sure it is appopriate
    
    string firstName;
    cout << "please enter your first name or the first 10 letters of your first name " << endl;
    getline (cin, firstName);
    
    
    
    //checking to see if the name is too long
    
    if (firstName.length () > 10) {
        cout << "First Name entered is too long!" << endl;
        return 0;
    }
    
    
    
    
    //getting the last name input and making sure it is appropriate
    
    string lastName;
    cout << "please enter your last name or the first twenty letters of your last name " << endl;
    getline (cin, lastName);
    
    
    
    //checking to see if the name is too long
    
    if (lastName.length () > 20) {
        cout << "Last Name entered too long!!" << endl;
        return 0;
    }
    
    
    //finding out whether the first and the last names are the same 
    
    if (firstName == lastName){
       cout <<"Warning first and last names are the same!" << endl;
    }
    
    
    
    
    //setting the usernames equal to the first or last name
    
        
    userName1  = firstName;
    
    userName2  = firstName;

    userName3 = lastName;
    
    
    
    //"randomizing" the usernames
    
    userName1.append (firstName, 0, 1);//adding the initals to the end of the username
    userName1.append (lastName, 0, 1);
    
    
    userName3.append (2, '1');//adding 11 to the end of the user name
    
    
    
    userName2.append (senpai);//adding senpai to the end of the username
    
    
    //printing out the user names
    
    cout << "the first option for usernames is: " << userName1 << endl;
    cout << "the second is: " << userName2 << endl;
    cout << "the third is: " << userName3 << endl;

    
}