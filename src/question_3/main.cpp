#include <iostream>
#include "question3.h"
using namespace std;

int main()
{
    char choice;

    do
    {
        cout << "Roll the die? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y')
        {
            int result = roll_die();
            cout << "You rolled: " << result << endl;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended. Goodbye!" << endl;
    return 0;
}
