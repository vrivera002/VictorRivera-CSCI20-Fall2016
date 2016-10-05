#include <iostream>
using namespace std;

int main()
{
    int suzyAge = 25;
    int johnnyAge = 21;
    cout << (suzyAge < johnnyAge) << endl;
    cout << "0 is the output bacause suzyAge is smaller than johnnyAge" << endl;
    
    
    int x = 7;
    int y = 7;
    cout << (x>=y) << endl;
    cout << "the output is one because x (seven) is equal to or is larger than y (seven)" << endl;
    
    
    int a = 1;
    int b = 9;
    cout << (a == b) << endl;
    cout << "the result is zero because a (1) does not equal b (9)" << endl;
    
    int limit = 20;
    int count = 10;
    cout << ((limit*count)/2 > 0) << endl;
    cout << "the answer is one because the total of (limit*count)/2 is bigger than zero " << endl;
    
    int t = -4;
    int z = 0;
    cout << (t>5 || z < 2) << endl;
    cout << " the output is one because while -4 is not bigger than 5, 0 is smaller than 2" << endl;
    
    int variable = -5;
    cout << (!( variable > 0)) << endl;
    cout << "the output is 1 because -5 is not bigger than 0 but then the not operator makes the double negative a positive" << endl;
    
    int newA = 16;
    cout << (newA/4 < 8 && newA >= 4) << endl;
    cout << "the output is one because both sides of the eqaution are true" << endl;
    
    int newX = -2;
    int newY = 5;
    cout << (newX*newY < 10 || y*z < 10) << endl;
    cout << "the output is one because both sides of the equation are true" << endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout << (!(j*l < 10) || y/x*4 < y*2) << endl;
    cout << "the output is one because one or both sides of the equation are true" << endl;
}