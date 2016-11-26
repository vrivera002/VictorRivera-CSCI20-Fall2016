#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    int lengthFirst = 0;//holds the value of the length of the first name
    int lengthSecond = 0;//holds the value of the length of the last name
    int charSame = 0;// used for comparing every letter of the names and if it equals the length of the names then I will tell them that they are the same
    
    char userName1[25];//user names that i will randomize later
    char userName2[25];
    char userName3[25];
    
    
    //getting the user input and making sure it is appopriate
    char firstName [20];
    cout << "please enter your first name or the first 10 letters of your first name " << endl;
    fgets (firstName, 29, stdin);
    for (int k = 0; firstName [k] != '\0'; k++) {//getting length of string in firstName
        lengthFirst++;
    }

    if (lengthFirst > 11) {//checking to see if the name is too long
        cout << "First Name entered is too long!" << endl;
        return 0;
    }
    
    
    //getting the last name input and making sure it is appropriate
    char lastName [30];
    cout << "please enter your last name or the first twenty digits of your last name " << endl;
    fgets (lastName, 29, stdin);
    //gets (lastName); //how i think the assignment wants us to get user input, but fgets is safer
    for (int p = 0; lastName [p] != '\0'; p++) {//getting length of string in lastName
        lengthSecond++;
    }
    if (lengthSecond > 21) {//checking to see if the name is too long
        cout << "Last Name entered too long!!" << endl;
        return 0;
    }
    
   
    
    //finding out whether firstName and Last name are the same
    
    if (lengthFirst == lengthSecond) {//finding out if the lengths are the same, if they arent then the names arent the same
        
        for (int i = 0; i != lengthFirst; i++) {
            
            if (firstName [i] == lastName [i]) {//comparing the letters of each array
                charSame++; //if charSame equals the length of either the first or last name then the names are the same
            }   
       }
    }
    
    
    if (charSame == lengthFirst) {
        cout << "Warning first and last name are the same" << endl;
    }
    
    
    
    //setting the usernames equal to the first or last name
    
    for (int j = 0; firstName [j] != '\0'; j++){
        
        userName1 [j] = firstName [j];
        userName2 [j] = firstName [j];
    }
    for (int i = 0; lastName [i] != '\0'; i++) {
        userName3[i] = lastName [i];
    }
    
    
    //"randomizing" the usernames
    
    if ((lengthSecond >= 1) && (lengthFirst >=1)) {
        userName3 [0] = lastName [1];
        userName3 [1] = firstName [0];
    }
    
    
    if (lengthFirst >= 2 && lengthSecond >= 2) {
        userName2 [2] = lastName [1];
        userName2 [1] = lastName [0];
    }
    
    
    
    if ((lengthFirst >= 4) && (lengthSecond > 1)) {
        userName1 [0] = lastName [0];
        userName1 [1] = lastName [1];
    }
    
    
    
    //printing out the user names
    cout << "possible usernames are :" << endl;
    for (int w = 0; userName1 [w] != '\0'; w++) {
        cout << userName1 [w];
    }
    for (int w = 0; userName2 [w] != '\0'; w++) {
        cout << userName2 [w];
    }
    for (int w = 0; userName3 [w] != '\0'; w++) {
        cout << userName3 [w];   
    }
    
}

