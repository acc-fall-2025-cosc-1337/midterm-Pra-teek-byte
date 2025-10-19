#include <iostream>
#include "question2.h"
using namespace std;

int main()
{
    double sales;
    char choice;

    do
    {
        cout << "Enter sales amount: ";
        cin >> sales;

        double commission = get_sales_commission(sales);

        cout << "Sales of " << sales << " yields a commission of " << commission << "." << endl;

        cout << "Do you want to enter another sales amount? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended. Goodbye!" << endl;

    return 0;
}
