#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int PRICE_CHEESEBURGER = 120;
    const int PRICE_BACON_BURGER = 150;
    const int PRICE_CHICKEN_BURGER = 130;

    int choice = 0;
    int quantity = 0;
    int total = 0;
    string orderAgain = "no";

    cout << "=====================================\n";
    cout << "         NASH'S BURGER HOUSE         \n";
    cout << "=====================================\n";

    do {
        cout << "\nMENU:\n";
        cout << "1. Cheeseburger     - P" << PRICE_CHEESEBURGER << endl;
        cout << "2. Bacon Burger     - P" << PRICE_BACON_BURGER << endl;
        cout << "3. Chicken Burger   - P" << PRICE_CHICKEN_BURGER << endl;

        cout << "\nEnter your choice (1-3): ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice) {
        case 1: total += PRICE_CHEESEBURGER * quantity; break;
        case 2: total += PRICE_BACON_BURGER * quantity; break;
        case 3: total += PRICE_CHICKEN_BURGER * quantity; break;
        default:
            cout << "Invalid choice! Please select again.\n";
            continue;
        }

        cout << "\nWould you like to order again? (yes/no): ";
        cin >> orderAgain;

    } while (orderAgain == "yes" || orderAgain == "Yes");

    cout << "\n=====================================\n";
    cout << "             FINAL BILL              \n";
    cout << "-------------------------------------\n";
    cout << "   Total Amount: P" << total << endl;
    cout << "=====================================\n";
    cout << "\nThank you for ordering at Nash's Burger House!\n";

    return 0;
}