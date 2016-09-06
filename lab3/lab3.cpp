#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int numQuart = 0; // this is used to output the number of quarters used
    int numDime = 0; //this is used to output the number of dimes used
    int numNickel = 0; //This is used to output the number of nuckels used
    int numPenny = 0; //This is used to output the number of pennies used
    int penny = 1; // a value that represents a penny
    int nickel = 5; //represents the monatary value of a nickel
    int dime = 10; // 
    int quarter = 25;
    int input = 3459; // the amount of change that gets put into the coinstar
    double origChange = input; // Used later after all of the coins have been calculated to get a dollar amount
    double dollar = .01;//multiplied with origChange to convert cents to dollars
    double fee = .001;//a fee taken by coinstar
   
    double amountTaken = input * fee;
    origChange = origChange * dollar;
    cout << "You have inserted " << input << " cents into the coinstar!" << endl;
    cout << "that is " << origChange << " dollar(s)!" << endl;
    cout << "coinstar is taking " << amountTaken << " from your total" << endl;
    
    numQuart = input/quarter; // finds the number of quarters in the amount
    cout << "there are " << numQuart << " quarter(s) in " << input << " cents" << endl;
    input = input%quarter;// removes the amount of quarters from the amount
    
    numDime = input/dime;
    cout << "there are " << numDime << " dime(s) in " << input  << " cents" << endl;
    input = input%dime;
    
    numNickel = input/nickel;
    cout <<  "there are " << numNickel << " nickel(s) in " << input  << " cents" << endl;
    input = input%nickel;
    
    numPenny = input/penny;
    cout << "there are " << numPenny << " penny(s) in " << input << " cents" << endl;
    
}