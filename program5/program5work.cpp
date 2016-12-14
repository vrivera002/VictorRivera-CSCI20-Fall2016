//for (5x ^ 2 + 6x ^ 3) / ( 7x^2)

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
    cout << "Please input your equation in the following form: (5x^2+6x^3)/(7x^2) , or " << 
    "parnth integer variable exponent number operator integer variable expo integer paranthesis / paranth integer varaible exponent integer paranthesis" << endl;
    
    
    istringstream inSS;//declaring instrwam object
    
    
    getline (cin, userInput);
    
    inSS.str(userInput);//setting the object equal to userinput
    
    //breaking each part of userinput to the correct parts of the formula
    
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
    
    cout << int1 << "@@" << int2 << "kkkk" << int3 << "pppp" << int4 << "tttt" << int5 <<  "UUUU" << int6 << "QQQ" << parnth << "WWWW" << toThe << endl;
    int1 = int1 * int2;
    int2 = int2 - 1;
    
    
    int3 = int3 * int4;
    int4 = int4 - 1;
    // if (oper == '-') {
    //     int3 = int3 * -1;
    // }
    
    int5 = int5 * int6;
    int6 = int6 - 1;
    
    cout << "(" << int1 << variable << "^" << int2 << oper << int3 << variable << "^" << int4 << ")/(" << int5 << variable << "^" << int6 << ")" << endl; 
    
    
    
}