//for x ^ n

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;


int main () {
    
    int equationForm;//the user inputs this to show what form their equstion will be in
    
    //5x+6x^1
    
    //(5x^2+6x^2)/(x7)^2
    
    double firstInt;//the first number int he equation
        
    char variable;//the variable
    
    char secondoper;
        
    char oper;//the operator
        
    double secondInt;//the second int in the equation
        
    char toThe;//holds the char ^
        
    int expo;//what the equation is being raised to 
    
    char divi;
    
    
    // parnth int1 var expo int3  sign int4 expo int5 parnth divs parnth int6 var parnth expo int7
    char parnth;
    
    int int1;
    int int2;
    int int3;
    int int4;
    int int5;
    int int6;
    
    string userInput;
    
     istringstream inSS;//declaring instrwam object
    
    cout << "enter equation in the following format:  variable ^ integer , or x ^ n" << endl;
    getline (cin, userInput);
    
    inSS.str(userInput);//setting the object equal to userinput
    
    //breaking each part of userinput to the correct parts of the formula
    
    inSS >> variable;
    
    inSS >> toThe;
    
    inSS >> int1;
    
    int2 = int1;
    int1 = int1 -1;
    
    cout << int2 << variable << "^" << int1 << endl;
    
    
}    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    