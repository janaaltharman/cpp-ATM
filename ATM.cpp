#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    cout << "--- ATM Transaction Evaluator ---" << endl;
    int accountActive;
    cout << "Enter accountActive : ";  
    cin>>accountActive;  
     int accountTier; 
    cout << "Enter accountTier ): ";
    cin>>accountTier;     
    double accountBalance;
    cout << "Enter accountBalance: ";
    cin>>accountBalance;
     double dailyLimit;
    cout << "Enter dailyLimit: ";
    cin>>dailyLimit;
    double withdrawal;
    cout << "Enter withdrawal amount: ";
    cin>>withdrawal;
    double fee;
    

    if (accountActive == 1) {
        if (withdrawal <= accountBalance) {
            if (withdrawal < dailyLimit) {
                cout << "Withdrawal Approved." << endl;

                switch (accountTier) {
                    case 1:
                        fee = 5.0;
                        break; 
                    case 2:
                        fee = 2.0;
                        break;
                    case 3:
                        fee = 0.0;
                        break;
                    default:
                        fee = 10.0;
                }
                cout << fixed<<setprecision(2) << "Transaction Fee charged: " << fee << " SAR "<<endl;
            } else {
                cout << "Error: Withdrawal exceeds daily limit!" << endl;
            }
        } 
    } else {
        cout << "Error: Account is suspended." << endl;
    }
    return 0;


}