#include <iostream>
using namespace std;

int main() {
    const int numMenu = 10;//the number of items on the menu
    cout << "Please enter the number of milkshakes you will be wanting today" << endl;
    int numChoices;//decides how many choices the user gets from the menu
    cin >> numChoices;//they get to choose how many milkshakes they want
    string menu [numMenu] = {"chocolate", "banana", "vanilla", "strawberry", "mint", "cherry", "watermelon", "arugala", "chocolate banana", "caramel" };
    string choices [1000];//i chose 1000 because it is unlikely that anyone will be ordering anything larger than 100 milkshakes at once
   
   
    cout << "the choices of milkshakes are:" << endl;
    for (int i = 0; i < numMenu; i++) {//prints out the menu options
        cout << menu [i] << endl;
    }
   
   
    cout << "Please choose what flavors of milkshake you want:" << endl;
    for (int j = 0; j < numChoices; j++) {//takes the user input and saves it into array choices
        cin >> choices [j]; 
    }
   
   
    cout << " The milkshakes you chose are: " << endl;
    for (int k = 0; k < numChoices; k++) {//prints array choices
        cout << choices[k] << endl;
    }
    
    
}