#include <iostream> 
using namespace std;

int main() {
    int userOption;
    do{
        cout << "1. Help" << endl;
        cout << "2. Exchange Status" << endl;  
        cout << "3. Make Offer" << endl;  
        cout << "4. Make Bid" << endl;  
        cout << "5. Wallet" << endl;  
        cout << "6. Continue" << endl; 

        cout<<"===============" << endl;
        cout<<"Type in 1-6 : " ;
        cin >> userOption ;

        switch (userOption)
        {
        case 0:
            cout << "Exit." <<endl;
            break;
        case 1:
            cout << "Help - choose options from the menu and follow the on screen instructions." <<endl;
            break;
        case 2:
            cout << "Exchange Status" <<endl;
            break;
        case 3:
            cout << "Make an offer." <<endl;
            break;
        case 4:
            cout << "Make b bid." <<endl;
            break;
        case 5:
            cout << "Wallet Information" <<endl;
            break;
        case 6:
            cout << "Continue Trading" <<endl;
            break;
        default:
            cout << "Wrong Input. Enter 1-6" <<endl;
            break;
        }
        cout << "" << endl;

    }
    while (userOption);
    return 0;
}
