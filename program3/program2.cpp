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
        int getNumGuesses (int x);//returns the value of the variable tally, keeps track of how many guesses it took the user to guess the number
        
    private:
        int randomNum;//holds the value of the random number the programm chooses

    
};

void RGG :: setRandomNumbers (int a, int b) {//sets the two parameters that the user will guess between
    randomNum = (rand()%b) + a;
}
int RGG :: getNumGuesses (int x) {//takes all of the user inputs and actually runs the game
    return randomNum-x;
}

int main() {
    int tally = 1;//keeps track of the number of guesses the user took to guess the random number
    int a, b, x, randomNum;//the user chooses the value of these variables
    RGG game1;//actually declaring the object
    srand(time(0));//makes it so that when the program runs a different random number is chosen each time
    cout << "please choose two numbers for the computer to choose a number between" << endl;
    cin >> a >> b;
    game1.setRandomNumbers (a,b);
    cout << "please guess your number" << endl;
        
    cin >> x;
    game1.getNumGuesses(x);
        if (randomNum < 0) {//if the number is too small
            cout << "guess a larger number" << endl;
            tally = tally + 1;
            return tally;
        }
        
        if (randomNum > 0) {//if the number is too large
            cout << "guess a smaller number" << endl;
            tally = tally + 1;
            return tally;
        }
        if (randomNum == 0) {
            cout << "Correct! It took you " << tally << " guesses to guess the correct answer" << endl;
        }
}
 /*while (x != randomNum) {
        if ((x > b )|| (x < a)) {//catches if the user did not choose an appropriate number
            cout << " it looks like you didn't choose a number between" << a << "and " << b << " please choose another number" << endl;
        }*/