#include <iostream>
using namespace std;
class TaxCalculator {
    
    public:
        void setName (string name);//sets clients names
        void setMaritalStatus ( char yesNo); // Sets the marital staus of the wages, decides which tax bracket to use
        void setGrossWages ( double amountEarned); // sets the user input equal to wages
        void setAmountWithHeld (double userInput);//compared to the calculated taxes to see if any taxes are owed
        double getGrossIncome ();//function that takes all of the input and actually calculates any taxes owed
    
    private:
        double wages;// user inputed wages that are used to calculate taxes
        double AGI;//adjusted gross income 
        double AmountSubtracted;//found by multiplying the AGI and the tax rate (determined by the amount made, see tax brackets), then sutracted from the agi to find if anymoney is owed
        string clientNames;// stores the name of the person whos taxes are being calculated
        char married;// used to holds the character y or n (y for married n for not married)
        double WithHeld;//compared to the calculated taxes to see if any money is owed
        double calculatedTax;//stores the calculated tax value and will be compared to withHeld to see if money is owed or if a refund is required
};

//taking in the clients name
void TaxCalculator :: setName (string name) {
    clientNames = name;
}

//finding out if they are married or not
void TaxCalculator :: setMaritalStatus (char yesNo) {
    married = yesNo;
}

//findong out gross wages
void TaxCalculator :: setGrossWages (double amountEarned){
    wages = amountEarned;
}


void TaxCalculator :: setAmountWithHeld (double userInput) {
    WithHeld = userInput;
} 

double TaxCalculator :: getGrossIncome () {
    AGI = wages;
    
    //tax bracket for married individual
    if (married ==  'y') {
        
        AGI = AGI - 20000;
        
        if (AGI < 0) {
            calculatedTax = 0;
        } 
       
        else if (AGI >= 0 && AGI < 17850) {
            calculatedTax = AGI * .1;
        }
       
        else if (AGI >= 17850 && AGI < 72500) {
            AmountSubtracted = (AGI - 17850) * .15;
            calculatedTax = 1785 + AmountSubtracted;
        }
       
        else if (AGI >=72500) {
            AmountSubtracted = (AGI - 72500) * .28;
            calculatedTax = 9982.50 + AmountSubtracted;
        } 
    }
    
    //tax bracket for a non married person
    if (married == 'n') {
        
        AGI = AGI - 10000;
        
        if (AGI < 0) {
            calculatedTax = 0;
        }
        else if (AGI >= 0 && AGI < 8925) {
            calculatedTax =  AGI * .1;
        }
        else if (AGI >= 8925 && AGI < 36250) {
            AmountSubtracted = (AGI - 8925) * .15;
            calculatedTax = 892.50 + AmountSubtracted;
        }
        else if (AGI >= 8925 && AGI < 87850) {
            AmountSubtracted = (AGI - 36250) * .25;
            calculatedTax = 4991.25 + AmountSubtracted;
        }
        else if (AGI >= 87850) {
            AmountSubtracted = (AGI - 72500) * .28;
            calculatedTax = 9982.50 + AmountSubtracted;
        }
    }
    
    if (calculatedTax > WithHeld) {
        cout << clientNames << endl << "wages: "  << wages << endl 
             << "you owe " << calculatedTax - WithHeld 
             << " more dollars" << endl;
        
    }
    
    else if (calculatedTax < WithHeld) {
        cout << clientNames << endl << "wages: " << wages << endl 
             << "you get " << WithHeld - calculatedTax  
             << " more dollars" << endl;
    }
}


int main() {
    TaxCalculator tax1;
    TaxCalculator tax2;
    TaxCalculator tax3;
    TaxCalculator tax4; 
    
    
    tax1.setName ("Joe Vandal");
    tax1.setMaritalStatus ('n');
    tax1.setGrossWages (12100);
    tax1.setAmountWithHeld (250);
    tax1.getGrossIncome ();
    
    
    tax2.setName ("Alfonso Haynes");
    tax2.setMaritalStatus ('y');
    tax2.setGrossWages (32351);
    tax2.setAmountWithHeld (3192);
    tax2.getGrossIncome ();
    
    
    tax3.setName ("Bridget Rowe");
    tax3.setMaritalStatus ('n');
    tax3.setGrossWages (88229);
    tax3.setAmountWithHeld (12057);
    tax3.getGrossIncome ();
    
    tax4.setName ("Wendy Joseph");
    tax4.setMaritalStatus ('y');
    tax4.setGrossWages (73291);
    tax4.setAmountWithHeld (9672);
    tax4.getGrossIncome();
}