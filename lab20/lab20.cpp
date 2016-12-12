#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    
    char firststr[10];
    
    int firstname = 0;
    
    char *head = firststr;//declares a pointer and puts firtstr in it
    
    char *tail = firststr;//declares a pointer and puts firtstr in it
                
                
    
    //taking in firtstr            
    cout << "Please enter a 10 letter word or less" << endl;
    
    cin >> firststr;
    
    //finding the length of the string inputted and putting it equal to firstname
    strlen(firststr);
    
    firstname = strlen(firststr);
    
    
    cout << "Your word is " << firststr << endl;
    
    //adds 1 to head for every letter in firstname     
    if (firstname < 10) {
            
        while (*head != '\0') {
                
            cout << *head;
            head++;
                
        }
        
            
        } else {
                                
            cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                
            
        }
    
    cout << endl;
                
    //makes tail point to the memory location of firsttr and sets firststr equal to its length minus one            
    tail = &firststr[strlen(firststr) - 1];
    
    //subtracts 1 from from tail until the location tail points to equals zero            
    if (firstname < 10) {
                                
        while (*tail>0) {
                    
            cout << *tail;
    
            tail--;
        }
    }
    
    //not sure why this is here            
    cout << endl;
    
    //sets heads memory location equal to firtstr           
    head = firststr;
    
    //sets tail's memory location equal to firsttrs' memory location and sets firsttr equal to firststr minus 1             
    tail = &firststr[strlen(firststr) - 1];
    
    //adds one to head            
    head++;
    
    //subtracts one from tails
    tail--;
    
    //palidrome?
    if (*head == *tail) {
        cout << "It is an palindrome!" << endl;
                
        
    } else {

        cout << "It is not an palindrome" << endl;
        
        
    }
 
    return 0;
}