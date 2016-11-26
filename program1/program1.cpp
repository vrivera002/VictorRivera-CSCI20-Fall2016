//victor rivera 9/14/16 
// this program takes user inputed hours and wages and calculates the amount taken home 
#include <iostream>
#include<iomanip>
using namespace std;

struct person 
{
  float wage;
  float hours;
};

int main()
{
    //cout.setf(fixed,showpoint);// i was trying to get the decimal (if any) to only show two spaces but it wasnt working
    float grossPay;//amount earned before taxes
    float netPay;//amount taken home after taxes
    float tax = .17;//amount of tax assigned by the problem
    float amountDeducted;//subtracted from the inputed amount // calculated by grosspay*tax
    
    
    person joeSmith;//declaring the objects
    joeSmith.wage;
    joeSmith.hours;
    
    person shaleseRay;//object
    shaleseRay.wage;
    shaleseRay.hours;
    
    person aliviaHope;//object
    aliviaHope.wage;
    aliviaHope.hours;
    
    person jazzyKerber;//object
    jazzyKerber.wage;
    jazzyKerber.hours;
    
    
    //taking the hours worked and the hourly wage and calculating the taxes
    cout << "please input the hourly wage and hours worked for joe smith" << endl;
    cin >> joeSmith.wage;
    cin >> joeSmith.hours;
    grossPay = joeSmith.hours * joeSmith.wage;//simple multiplication to find the amount earned
    amountDeducted = grossPay * tax;//finds amount taxes take
    netPay = grossPay - amountDeducted;// actually takes the amount
    cout << "Joe Smith worked " << joeSmith.hours << " hours at a rate of " 
         << joeSmith.wage << " dollars per hour, resulting in a gross pay of $" 
         << grossPay << ", resulting in a net pay of $" << netPay << endl;
         
    
    
    cout << "please input the hourly wage and hours worked for Shalese Ray" << endl;
    cin >> shaleseRay.wage;
    cin >> shaleseRay.hours;
    grossPay = shaleseRay.hours * shaleseRay.wage;//simple multiplication to find the amount earned
    amountDeducted = grossPay * tax;//finds amount taxes take
    netPay = grossPay - amountDeducted;// actually takes the amount
    cout << "Shalese Ray worked " << shaleseRay.hours << " hours at a rate of " 
         << shaleseRay.wage << " dollars per hour, resulting in a gross pay of $" 
         << grossPay << ", resulting in a net pay of $" << netPay << endl;
         
         
    
    cout << "please input the hourly wage and hours worked for Alivia Hope" << endl;
    cin >> aliviaHope.wage;
    cin >> aliviaHope.hours;
    grossPay = aliviaHope.hours * aliviaHope.wage;//simple multiplication to find the amount earned
    amountDeducted = grossPay * tax;//finds amount taxes take
    netPay = grossPay - amountDeducted;// actually takes the amount
    cout << "Alivia worked " << aliviaHope.hours << " hours at a rate of " 
         << aliviaHope.wage << " dollars per hour, resulting in a gross pay of $" 
         << grossPay << ", resulting in a net pay of $" << netPay << endl;
         
         
    
    cout << "please input the hourly wage and hours worked for Jazzy kerber" << endl;
    cin >> jazzyKerber.wage;
    cin >> jazzyKerber.hours;
    grossPay = jazzyKerber.hours * jazzyKerber.wage;//simple multiplication to find the amount earned
    amountDeducted = grossPay * tax;//finds amount taxes take
    netPay = grossPay - amountDeducted;// actually takes the amount
    cout << "Jazzy worked " << jazzyKerber.hours << " hours at a rate of " 
         << jazzyKerber.wage << " dollars per hour, resulting in a gross pay of $" 
         << grossPay << ", resulting in a net pay of $" << netPay << endl;
}