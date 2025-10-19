#include <iostream>
#include "question4.h"
using namespace std;

int main()
{
    char choice;

    do
    {
        int number;

        cout << "Enter a number (1 to 10): ";
        cin >> number;

        // Validate input
        while (number < 1 || number > 10)
        {
            cout << "Invalid input. Enter a number between 1 and 10: ";
            cin >> number;
        }

        string result = get_factorial_sequence(number);
        cout << "Factorial sequence: " << result << endl;

        cout << "Do you want to enter another number? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended. Goodbye!" << endl;

    return 0;
}
