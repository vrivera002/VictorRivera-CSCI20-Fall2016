#include <iostream>
using namespace std;
float toKilo (int numPounds)//just shows computer that the input is a number
{
    double oneKilo = .453592;//multiply this by the number of kilos and you  have pounds
    double newKilo = numPounds * oneKilo;//onkilo, and new kilo only work inside the function
    return newKilo;
}
float toPound (int numKilos) 
{
    double onePound = 2.20462;//one kilo equals this many pounds
    double newPound = numKilos * onePound;
    return newPound;//onePound and newPound only work in  the function
}
int main()
{
    cout << "Please input the number of pounds you have" << endl;
    int pounds;//global variable
    cin >> pounds;
    double kilo = toKilo(pounds);//global var
    cout << "That is equal to " <<  kilo  << " kilograms"<< endl;
    
    cout << "Please input the number of kilos you have" << endl;
    int kilos;//global var
    cin >> kilos;
    double pound = toPound(kilos);//global var
    cout << "That is equal to " <<  pound  << " pounds"<< endl;
    
    
}