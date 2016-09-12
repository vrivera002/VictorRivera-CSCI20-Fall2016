#include <iostream>
using namespace std;

struct monster 
{
        string head;
        string eyes;
        string ears;
        string nose;
        string mouth;
};

int main()
{
    monster monsterOne;
    monster monsterTwo;
    monster monsterThree;
    monster monsterFour;
    
   
    monsterOne.head = "Zombus";
    monsterOne.eyes = "spritem";
    monsterOne.nose = "none";
    monsterOne.ears = "vegitas";
    monsterOne.mouth = "Wackus";
    cout << "monsterOne: " << monsterOne.head << ", " <<  monsterOne.eyes
         << ", " << monsterOne.nose << ", " << monsterOne.ears << ", "
         << monsterOne.mouth << endl;
    
    
    monsterTwo.head = "spritem";
    monsterTwo.eyes = "spritem";
    monsterTwo.nose = "spritem";
    monsterTwo.ears = "vegitas";
    monsterTwo.mouth = "Wackus";
    cout << "monsterTwo: " << monsterTwo.head << ", " <<  monsterTwo.eyes
         << ", " << monsterTwo.nose << ", " << monsterTwo.ears << ", "
         << monsterTwo.mouth << endl;
    
    
    monsterThree.head = "Zombus";
    monsterThree.eyes = "spritem";
    monsterThree.nose = "spritem";
    monsterThree.ears = "vegitas";
    monsterThree.mouth = "spritem";
    cout << "monsterThree: " << monsterThree.head << ", " <<  monsterThree.eyes
         << ", " << monsterThree.nose << ", " << monsterThree.ears << ", "
         << monsterThree.mouth << endl;
    
   
    
    cout << "enter your choice of monster head (zombus, spritem, wackus, vegitas), " 
         <<"eyes, nose, ears, mouth" << ", please hit enter after each selection"
         << endl;
   
    monsterFour.head;
    monsterFour.eyes;
    monsterFour.nose;
    monsterFour.ears;
    monsterFour.mouth;
    
    cin >> monsterFour.head;
    cin >> monsterFour.eyes;
    cin >> monsterFour.nose;
    cin >> monsterFour.ears;
    cin >> monsterFour.mouth;
    
    cout << "monsterFour: " << monsterFour.head << ", " <<  monsterFour.eyes
         << ", " << monsterFour.nose << ", " << monsterFour.ears << ", "
         << monsterFour.mouth << endl;
    
}