//Victor Rivera
//csci20
//last updated: 12, 12, 16
//this program takes in an equation (only in certain forms though) that are inputted by the user and finds the derivative
//this program doesnt actually do any math but relies on the "rules of derivatives" and L'Hops rule
//this is because finding derivatives take a lot of algebra and it will take a computer too long to run it 



#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;



//the class derivatives holds all of the formulas and rules, the user gets to choose which one they want to use

class Derivatives {
    
    public:
        
        void setChooseEquation ();//the user gets to choose which equation form they are doing
        
        void setEquationForm (int userChoice);//takes in the user input and tells them how to input the formula right
        
        void setEquation(int userChoice, string userInput);//takes the user equation and makes it so it can be used
        
        int getAnswers (int userChoice);//returns the answer found and outputs it to the screen
        
        
    private:
        
        
        int int1, int2, int3, int4, int5, int6;//all of the numbers needed to do some of the derivatives
        
        char parnth;//holds the paranthesis
        
        string ln;//holds ln 
        
        char variable;//the variable
        
        char oper;//the operator
        
        char divi;//for /
        
        char toThe;//holds the char ^
        
        int userChoice;//used to choose the form of equation that the user wants
    
};


//shows the user the options for the equations
void Derivatives :: setChooseEquation () {
     
    cout << "choose 1 - 6 " << endl;
    cout << "*************" << endl;
    cout << "choose 1 for: nx + kx^g" << endl;
    cout << "*************" << endl;
    cout << "choose 2 for: (nx ^ k + tx ^ g) / ( hx^L)" << endl;
    cout << "*************" << endl;
    cout << "choose 3 for: x^n" << endl;
    cout << "*************" << endl;
    cout << "choose 4 for: ln x" << endl;
    cout << "*************" << endl;
    cout << "choose 5 for: ln (x ^ n + int x)" << endl;
    cout << "*************" << endl;
    cout << "choose 6 for: e^kx" << endl;
    
}


//user choice is just a number that represents the user's choice of equation

void Derivatives :: setEquationForm (int userChoice) {
     
   
    
    //breaking each part of userinput to the correct parts of the formula
    if (userChoice == 1) {
        
        cout << "Please enter your equation as follows: n x + k x ^ g" << endl;
        
    }
    if (userChoice == 2) {
        
        cout << "Please enter your eqaution in the following format: ( n x ^ k + t x ^ g ) / ( h x ^ L )" << endl;
    }
    if (userChoice == 3) {
        
        cout << "Please enter your equation in the following format: x ^ n " << endl;
       
    } 
    if (userChoice == 4) {
        
        cout << "Please enter your equation on the following format: ln ( n x )" << endl;
        
    }
    if (userChoice == 5) {
        
        cout << "Please enter your equation in the following format: ln ( x ^ n + k x )" << endl;
        
    }
    if (userChoice == 6) {
        
        cout << "Please enter your equation in the following format: e ^ k x " << endl;
    }
}

//getting the equation from the user and putting it into a form we can use    


void Derivatives :: setEquation (int userChoice, string userInput) {

     istringstream inSS;//declaring instrwam object
     inSS.str(userInput);//setting the object equal to userinput
    
     if (userChoice == 1) {
         
          //actually breaking the equation up
        
        inSS >> int1;
        
        inSS >> variable;
        
        inSS >> oper;
        
        inSS >> int2;
        
        inSS >> variable;
        
        inSS >> toThe;
        
        inSS >> int3;
     }
     if (userChoice == 2) {
         
         //actually breaking the equation up
        
        inSS >> parnth;
    
        inSS >> int1;
        
        inSS >> variable;
        
        inSS >> toThe;
        
        inSS >> int2; 
        
        inSS >> oper;
        
        inSS >> int3;
        
        inSS >> variable;
        
        inSS >> toThe;
        
        inSS >> int4;
        
        inSS >> parnth;
        
        inSS >> divi;
        
        inSS >> parnth;
        
        inSS >> int5;
        
        inSS >> variable;
        
        inSS >> toThe;
        
        inSS >> int6;
        
        inSS >> parnth;
     
         
     }
     if (userChoice == 3) {
         
        //actually breaking the equation up
        
       
        inSS >> variable;
    
        inSS >> toThe;
        
        inSS >> int1;
     }
     if (userChoice == 4) {
         
        //actually breaking the equation up
        
        
        inSS >> ln;//for the ln
    
        inSS >> parnth;
        
        inSS >> int1;
        
        inSS >> variable;
        
        inSS >> parnth;
     }
     if (userChoice == 5) {
        //actually breaking the equation up
        
        
        inSS >> ln;
        
        inSS >> parnth;
        
        inSS >> variable;
        
        inSS >> toThe;
        
        inSS >> int1;
        
        inSS >> oper;
        
        inSS >> int2;
        
        inSS >> variable;
        
        inSS >> parnth;
         
     }
     if (userChoice == 6) {
         //actually breaking the equation up
        
        
        inSS >> oper;
    
        inSS >> toThe;
    
        inSS >> int1;
    
        inSS >> variable;
    
     }
    
}


//does the necessary math (if any) and outputs the answer 

int Derivatives :: getAnswers(int userChoice) {
 
    if (userChoice == 1) {
        
        int2 = int2 * int3;
        int3--;
        
        cout << int1 << oper << int2 << variable << "^" << int3 << endl;
        
    }
    if (userChoice == 2) {
        int1 = int1 * int2;
        int2 = int2 - 1;
        
        
        int3 = int3 * int4;
        int4 = int4 - 1;
       
        int5 = int5 * int6;
        int6 = int6 - 1;
        
        cout << "(" << int1 << variable << "^" << int2 << oper << int3 << variable << "^" << int4 << ")/(" << int5 << variable << "^" << int6 << ")" << endl; 
    }
    if (userChoice == 3) {
        
        int2 = int1;
        int1 = int1 -1;
        
        cout << int2 << variable << "^" << int1 << endl;
    }
    if (userChoice == 4) {
        
        cout << "the derivative is:" << endl; 
    
        cout << "1/" << int1 << variable << endl; 
    }
    if (userChoice == 5) {
        
        int3 = int1;
        int1 = int1 -1;
        
        cout << "the derivative is:" << endl;
        
        cout << "(1/" << variable << "^" << int3 << oper << int2 << variable << ")*" << int3 << variable << "^" << int1 << endl;  
    }
    if (userChoice == 6) {
        
        cout << "the derivative is:" << endl;
        cout << int1 << "e^" << int1 << variable; 
    
    }

}

int main () {
    
    
    //declaring the object of our class
    Derivatives derivative1;
    
    //displaying the options for the equations
    
    derivative1.setChooseEquation();
    
    
    //now they've seen the choices for equations and they get to choose which one they will be using
    int userChoice;
   
    cin >> userChoice;

    //sets the equation into a form that can be used
    derivative1.setEquationForm (userChoice);
    
    
    //actually taking in the equation
    string userInput;//holds the equation the user inputs
    cin.ignore();//clearing the cin so that the equation can be input
    getline (cin, userInput);
    
    derivative1.setEquation (userChoice, userInput);
    //does the math and gets the answers
    derivative1.getAnswers(userChoice);
    
    
    
    
    
}




