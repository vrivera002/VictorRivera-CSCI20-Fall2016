//Victor Rivera
// 10/20/16
//This program is a game that has the user input two number, the program will then choose a random number between the two numbers. The user is then prompted to guess which number the program chose, if the 
//guessed number is below the randnum then the user is prompted to guess a bigger number. If the guessed is bigger then the user is prompted to guess a lower number 

#include <iostream>
#include <ctime>
using namespace std;

class RGG {//stands for random guessing game
    
    public:
        void setRandomNumbers (int a, int b);//the function where the user sets the highest and lowest possible number for the programm to choose
        void setGuessedNumber(int z);//stores the value the user inputs
        int getNumGuesses ();//returns the value of the variable tally, keeps track of how many guesses it took the user to guess the number
        
    private:
        int tally = 1; //keeps track of the number of guesses the user took to guess the random number
        int randomNum;//holds the value of the random number the programm chooses

    
};

void RGG :: setRandomNumbers (int a, int b) {//sets the two parameters that the user will guess between
    randomNum = (rand()%b) + a;
}
int RGG :: getNumGuesses () {//takes all of the user inputs and actually runs the game
    int x;
    cin >> x; 
    while (x != randomNum) {
        /*if ((x > b )|| (x < a)) {//catches if the user did not choose an appropriate number
            cout << " it looks like you didn't choose a number between" << a << "and " << b << " please choose another number" << endl;
        }*/
    
        if (x < randomNum) {//if the number is too small
            cout << "guess a larger number" << endl;
        }
        
        if (x > randomNum) {//if the number is too large
            cout << "guess a smaller number" << endl;
        }
        tally = tally + 1;
        cin >> x;
    }
     cout << "Correct! It took you " << tally << " guesses to guess the correct answer" << endl;
}

int main() {
    int tally, a, b, z;//the user chooses the value of these variables
    RGG game1;//actually making the object
    srand(time(0));//makes it so that when the program runs a different random number is chosen each time
    cout << "please choose two numbers for the computer to choose a number between" << endl;
    cin >> a >> b;
    game1.setRandomNumbers (a,b);
    cout << "please guess your number" << endl;
    game1.getNumGuesses();
}