#include <iostream>
using namespace std;

int main() {
    int choice;
    bool end = false;
    char YN;

    while (end != true) {
        cout << "Choose your option: " << endl;
        cout << "1 - Option number one" << endl;
        cout << "2 - Option number two" << endl;
        cout << "3 - Option number three" << endl;
        cout << "4 - Option number four" << endl;
        cout << "5 - Back to the menu" << endl;
        cout << "Enter your choice: ";

        cin >> choice;
        switch (choice) {
            case 1:
                cout << "This is the 1st choice!" << endl;
                // Code for the 1st case goes here

                cout << "Would you like to go back to the menu? "<< endl;
                cout << "If yes then press Y, if no press N" <<endl;
                cout << "Choice: ";
                cin >> YN;
                if (YN == 'Y'){
                    end = false;
                }
                else if (YN == 'N'){
                    end = true;
                }
                else {
                    cout << "Wrong choice" << endl;
                    end = false;
                }
                break;
            case 2:
                cout << "This is the 2nd choice!" << endl;
                // Code for the 2nd case goes here

                cout << "Would you like to go back to the menu? "<< endl;
                cout << "If yes then press Y, if no press N" <<endl;
                cout << "Choice: ";
                cin >> YN;
                if (YN == 'Y'){
                    end = false;
                }
                else if (YN == 'N'){
                    end = true;
                }
                else {
                    cout << "Wrong choice" << endl;
                    end = false;
                }
                break;
            case 3:
                cout << "This is the 3rd choice!" << endl;
                // Code for the 3rd case goes here

                cout << "Would you like to go back to the menu? "<< endl;
                cout << "If yes then press Y, if no press N" <<endl;
                cout << "Choice: ";
                cin >> YN;
                if (YN == 'Y'){
                    end = false;
                }
                else if (YN == 'N'){
                    end = true;
                }
                else {
                    cout << "Wrong choice" << endl;
                    end = false;
                }
                break;
            case 4:
                cout << "This is the 4th choice!" << endl;
                // Code for the 4th case goes here

                cout << "Would you like to go back to the menu? "<< endl;
                cout << "If yes then press Y, if no press N" <<endl;
                cout << "Choice: ";
                cin >> YN;
                if (YN == 'Y'){
                    end = false;
                }
                else if (YN == 'N'){
                    end = true;
                }
                else {
                    cout << "Wrong choice" << endl;
                    end = false;
                }
                break;
            case 5:
                end = false; // Case 5 and default are the same but case 5 is chosen by the user while default is error.
                break;
            default:
                end = false;
                break;
        }
    }
    return 0;
}
