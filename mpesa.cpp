#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, subChoice;
    string phoneNumber, agentNumber, tillNumber, businessNumber;
    string accountNumber, pin;
    double amount;

    cout << "=====================================\n";
    cout << "          M-PESA MENU SYSTEM         \n";
    cout << "=====================================\n";
    cout << "1. Send Money\n";
    cout << "2. Withdraw Cash\n";
    cout << "3. Buy Airtime\n";
    cout << "4. Loans and Savings\n";
    cout << "5. Lipa na M-PESA\n";
    cout << "6. My Account\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "\n--- Send Money ---\n";
            cout << "Enter recipient phone number: ";
            cin >> phoneNumber;
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        case 2:
            cout << "\n--- Withdraw Cash ---\n";
            cout << "Enter agent number: ";
            cin >> agentNumber;
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        case 3:
            cout << "\n--- Buy Airtime ---\n";
            cout << "1. My Phone\n";
            cout << "2. Other Phone\n";
            cout << "Enter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                cout << "Enter amount: ";
                cin >> amount;
            } else {
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                cout << "Enter amount: ";
                cin >> amount;
            }

            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        case 4:
            cout << "\n--- Loans and Savings ---\n";
            cout << "1. Request Loan\n";
            cout << "2. Save Money\n";
            cout << "Enter choice: ";
            cin >> subChoice;

            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        case 5:
            cout << "\n--- Lipa na M-PESA ---\n";
            cout << "1. Buy Goods\n";
            cout << "2. Pay Bill\n";
            cout << "Enter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                cout << "Enter till number: ";
                cin >> tillNumber;
            } else {
                cout << "Enter business number: ";
                cin >> businessNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
            }

            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        case 6:
            cout << "\n--- My Account ---\n";
            cout << "1. Check Balance\n";
            cout << "2. Mini Statement\n";
            cout << "3. Change PIN\n";
            cout << "Enter choice: ";
            cin >> subChoice;

            cout << "Enter M-PESA PIN: ";
            cin >> pin;
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}