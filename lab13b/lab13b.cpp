#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int startHour;//used to hold the value of the hour inputed and outputed
    int startMin;//used to hold the minute value that will be inputed and outputed
    char l;//holds the value of the string  :, used to seperate hours and minutes
    int endHour;//gives a value for the starthour to count up to
    int endMin;//gives a value for the min to count up to
    //for counting from 1 to 2 59
    int setHr1 = 1;
    int setMin1 = 00;
    int setHr2 = 2;
    int setMin2 = 59;
    int remaining;// used for when startmin gets above 60
    
    
    cout << "PLease enter the start time and the end time in hh:mm format " << endl;
    cin >> startHour >> l >> startMin;//the l is just for holding the : value
    cin >> endHour >> l >> endMin;
    
    
    cout << "before we use those times we are first going to count from 1 to 2:59 " << endl;
        for (int i = 0; i < 119; i++) {
            setMin1++;
        
        if (setMin1 == 60) {//if an hour has been reached
            setMin1 = 0;
            setHr1++;
        }
           cout << setHr1 << ":" << setMin1 << endl; 
        }
        
    
    
   
    
    cout << "Now that that is done we will count from " << startHour << ':' 
         << startMin << " to " << endHour << ':' << endMin << endl;
    
    
    while ((startHour != endHour) || (startMin != endMin)) {//for if the start time and end time are different
        
        if ((startHour == endHour) && (endMin - startMin) < 15) {//we need to check if the two values are within fifteen minutes of each other before adding
            startMin++;//we count up by one minute
        } else {
            
            startMin = startMin + 15;//if we dont count up by one minute then we are counting up by fifteen instead
        }
        
        
        //if after we add the minutes and we end up with 78 minutes then one hour needs to be added and our minutes set to 18
        if (startMin >= 60) {//checking to see if the minutes have exceeded 60 ( 60 minutes in an hour)
            remaining = startMin - 60;//remaining would hold the value of 18 for us (thats using the example from above)
            startMin = remaining;
            startHour = startHour + 1;
            
        } 
        
        if (startHour > 12) {//so we dont go into crazy hours like 13 or even 3450
                startHour = 1;
        } 
        
        cout << startHour << ":" << startMin << endl;
    
    

    
    
   
   
    
}
}