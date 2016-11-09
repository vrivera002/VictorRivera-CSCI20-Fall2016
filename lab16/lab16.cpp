#include <iostream>
using namespace std;

int main() {
    const int numMenu = 10;//the number of items on the menu
    int inventorySize = 1000;//the amount of ,ilkshakes i can make
    double owed = 0;//this holds the value of the money they owe
    int numChoices;//decides how many choices the user gets from the menu
    
    cout << "Please enter the number of milkshakes you will be wanting today" << endl;
    cin >> numChoices;//they get to choose how many milkshakes they want
    
    
    string menuItems [numMenu] = {"chocolate", "banana", "vanilla", "strawberry", "mint", "cherry", "watermelon", "arugala", "chocolate banana", "caramel" };
    int menu [numMenu] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//a numerical value for the choices of milkshakes
    double price [numMenu] = {1.99, 2.99, 1.99, 1.99, 2.35, 1.99, 1.99, 1.99, 2.25, 1.99};//holds the prices for all of the milkshakes
    double totalOwed [numChoices];//so that the amount of money each milkshake costs can be printed out at the end
    int choices [inventorySize];//i chose 1000 because it is unlikely that anyone will be ordering anything larger than 100 milkshakes at once
    
  
    
    for (int i = 0; i < numMenu; i++) {//prints out the menu options and prices
        cout <<  menuItems [i] << ", which costs " << price [i] << endl;
    }
    
   
    cout << "Please choose what flavors of milkshake you want:" << endl
         << "Press 1 for chocolate, 2 for watermelon, 3 for araugala, ect. " << endl;
    
    
    for (int j = 0; j < numChoices; j++) {//takes the user input and saves it into array choices
        cin >> choices [j];
        owed = owed + price [choices [j] - 1];//choices is used as the argument of price because choices j holds the number that they chose
        inventorySize--;//we made a milkshake so we have to subtract 1 from the amount we can still make
        totalOwed [j] = price [choices [j] - 1];//so that the amount of money each milkshake costs can be printed out at the end
    }
   
    cout << "I can make " << inventorySize << " more milkshakes." << endl;
    cout << "The milkshakes you chose are: " << endl;
    
    
    for (int k = 0; k < numChoices; k++) {//prints array choices
        cout << menuItems [choices[k] - 1] << " which costs "
        <<  totalOwed [k] << endl;
       
    }
     cout << "total amount owed is " << owed << endl;
    
}