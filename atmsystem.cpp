#include <iostream>
using namespace std;

int main() {
    double balance = 1000, amount;
    int choice;

    do {
        cout << "\nATM Menu\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Balance: $" << balance << endl; break;
            case 2: cout << "Enter amount: "; cin >> amount; balance += amount; break;
            case 3: cout << "Enter amount: "; cin >> amount; 
                    if (amount <= balance) balance -= amount; 
                    else cout << "Insufficient balance\n"; 
                    break;
            case 4: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
