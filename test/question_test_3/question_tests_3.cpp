#include <iostream>
#include "../../src/question_3/question3.h"
using namespace std;

int main()
{
    cout << "Testing roll_die() 10 times:" << endl;
    for (int i = 0; i < 10; i++)
    {
        int result = roll_die();
        cout << "Roll " << i+1 << ": " << result;
        if (result >= 1 && result <= 6)
            cout << " ✅ OK" << endl;
        else
            cout << " ❌ ERROR" << endl;
    }
    return 0;
}
