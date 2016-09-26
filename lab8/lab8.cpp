#include <iostream>
using namespace std;


float toKilo (int numPounds)//just shows computer that the input is a number//local var
{
    double oneKilo = .453592;//multiply this by the number of kilos and you  have pounds//local var
    double newKilo = numPounds * oneKilo;//onkilo, and new kilo only work inside the function//local var
    return newKilo;
}
float toPound (int numKilos) //local var
{
    double onePound = 2.20462;//one kilo equals this many pounds//local var
    double newPound = numKilos * onePound;//local var
    return newPound;//onePound and newPound only work in  the function//local var
}



int main()
{
    
    cout << "Please input the number of pounds you have" << endl;
    int pounds;//local variable
    cin >> pounds;
    double kilo = toKilo(pounds);//loal var
    cout << "That is equal to " <<  kilo  << " kilograms"<< endl;
    
    
    
    cout << "Please input the number of kilograms you have" << endl;
    int kilos;//local var
    cin >> kilos;
    double pound = toPound(kilos);//loal var
    cout << "That is equal to " <<  pound  << " pounds"<< endl;
    
}