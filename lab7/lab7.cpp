#include <iostream>
using namespace std;

void song (string beverage, int number)//this function takes an inputed beverage of choice and a number of those beverages then counts them down
{
    cout << number << " bottles of " << beverage << " on the wall" << endl;
    cout << number << " bottles of " << beverage << " on the wall" << endl;
    if ( number > 0)
    {    
        cout << "take one down, pass it around, " << number - 1 << " bottles of " 
             << beverage << " on the wall" << endl;
    }
    else if (number == 0)
    {
        cout << "no more bottles of " << beverage << " on the wall!" << endl;
    }
};

int main()
{
    int numberBottles;
    string beverageName;
    cout << " please enter the name of the beverage and the amount" << endl;
    cin >> beverageName;
    cin >> numberBottles;
    for (numberBottles; numberBottles > -1; numberBottles = numberBottles - 1)
    {
       song(beverageName, numberBottles);
    }
}