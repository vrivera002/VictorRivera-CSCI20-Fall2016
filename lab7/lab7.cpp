#include <iostream>
using namespace std;
void asciiArt ()// just a copyright image
{
     cout <<"      ###" << endl;
   cout <<"     # __ #" << endl;
   cout <<"     # .. #" << endl;
   cout <<"     # __ #" << endl;
   cout <<"     #    #" << endl;
cout <<"  ##   ##   "<< endl;
  cout <<"     $$$##$$$  copyright Victor Rivera 2016"<< endl;
   cout <<"       ##   ##"<< endl;
   cout <<"       ##   "<< endl;
   cout <<"       ##   "<< endl;
   cout <<"      #  #  "<< endl;
   cout <<"      #  #  "<< endl;
   cout <<"      #  #  "<< endl;
};
void song (string beverage, int number)//this function takes an inputed beverage of choice and a number of those beverages then counts them down
{//beverage is any beverage and number is the number of beverages
    cout << number << " bottles of " << beverage << " on the wall" << endl;
    cout << number << " bottles of " << beverage << " on the wall" << endl;
    if ( number > 0)//used foe all of the verses in the song except when there are no more beverages
    {    
        cout << "take one down, pass it around, " << number - 1 << " bottles of " 
             << beverage << " on the wall" << endl;
    }
    else if (number == 0)//used for when there are no beverages
    {
        cout << "no more bottles of " << beverage << " on the wall!" << endl;
    }
};

int main()
{
    int numberBottles;//used for input essentially number 
    string beverageName;//beverage
    cout << " please enter the name of the beverage and the amount" << endl;
    cin >> beverageName;
    cin >> numberBottles;
    for (numberBottles; numberBottles > -1; numberBottles = numberBottles - 1)//this takes the number of bottles and as long as its above zero it will run song
    {
       song(beverageName, numberBottles);
    }
    asciiArt();//just a copyright thing
}