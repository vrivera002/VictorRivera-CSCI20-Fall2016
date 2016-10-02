#include <iostream>
//#include "lab9.cpp" // commented out because if it is not commented out everything breaks
using namespace std;

class TemperatureConverter {
    
    public :
        void SetTempFromKelvin (double input);
        double GetTempFromKelvin();
        void SetTempFromCelsius (double celsInput);
        double GetTempAsCelsius ();
        void SetTempFromFahrenheit (double farhInput);
        double GetTempAsFahrenheit ();
        TemperatureConverter ();//defult constructor
        TemperatureConverter (double  kelvin_);//overload constructor
        void printTemps ();
    
    private :
        double kelvin_;
        double kelFinal;
        double celsiusIn;
        double celsFinal;
        double farhIn;
        double farhOut;
};

TemperatureConverter :: TemperatureConverter () {//default constructor
    kelFinal = 0;
}

TemperatureConverter :: TemperatureConverter(double kelvin_) {//overload constructor 
    kelFinal = kelvin_;
}

void TemperatureConverter :: SetTempFromKelvin( double input) {//takes in kelvin value and stores it
    kelvin_ = input;
    return;
}

double TemperatureConverter :: GetTempFromKelvin() {//pulls the stored kelvin value
    kelFinal = kelvin_;
    return kelFinal;
}

void TemperatureConverter :: SetTempFromCelsius (double celsInput) {//intakes a celsius value and returns it in kelvin
    celsiusIn = celsInput + 273.15;
    return;
}

double TemperatureConverter :: GetTempAsCelsius () {//intakes a kelvin value and returns it in celsius
    celsFinal = celsiusIn - 273.15;
    return celsFinal;
}
void TemperatureConverter :: SetTempFromFahrenheit (double farhInput) {//accepts a kelvin value and converts it to farenheit
    farhIn = (5*(farhInput - 32)/9);
    return;
}
double TemperatureConverter :: GetTempAsFahrenheit () {
    farhOut = ((farhIn * 9)/5 + 32);
    return farhOut; 
}
void  TemperatureConverter :: printTemps () {
    cout << kelFinal << " degrees kelvin" << endl;
    kelFinal = celsFinal;
    cout << kelFinal << " degrees celsius" << endl;
    kelFinal  = farhOut;
    cout << kelFinal << " degrees farenheit" << endl;
    return;
}

int main() {
    TemperatureConverter temp1;
    TemperatureConverter temp2 (274);
    
    temp1.printTemps();
    temp2.printTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout << temp1.GetTempFromKelvin() << endl;//testing accessor function
    temp1.printTemps();

    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.printTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.printTemps();
    
    return 0;
}