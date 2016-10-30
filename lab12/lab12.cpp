#include <iostream>
using namespace std;

int main() {
    char yesNo;//holds the value of character for if statements
    cout << "What animal are you? " << endl;
    cout << "Do you like the outdoors? press y for yes n for no" << endl;
    cin >> yesNo;
    if (yesNo == 'y') {
        cout << "do you like to run?" << endl;
        cin >> yesNo;
        
        if (yesNo == 'y') {
            cout << "you are a horse!" << endl;
        } else if (yesNo == 'n') {
            cout << "you are a turtle!" << endl;
        }
    } else if (yesNo == 'n') {
        cout << "Do you like cheese?" << endl;
        cin >> yesNo;
        if (yesNo == 'y') {
            cout << "You are a mouse!" << endl;
        } else if (yesNo == 'n') {
            cout << "Do you like to swim?" << endl;
            cin >> yesNo;
            if (yesNo == 'y') {
                cout << "you are a fish!" << endl;
            } else if (yesNo == 'n') {
                cout  << "You are a cat!" << endl;
            }
        }
    }
        
}   