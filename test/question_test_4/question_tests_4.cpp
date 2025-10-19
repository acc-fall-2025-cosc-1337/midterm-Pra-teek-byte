#include <iostream>
#include "../../src/question_4/question4.h"
using namespace std;

void run_test(int input, const string& expected)
{
    string result = get_factorial_sequence(input);
    cout << "Input: " << input << " | Expected: " << expected
         << " | Got: " << result;
    if (result == expected)
        cout << " ✅ PASS" << endl;
    else
        cout << " ❌ FAIL" << endl;
}

int main()
{
    cout << "Testing get_factorial_sequence()" << endl;

    run_test(3, "1x2x3=6");
    run_test(4, "1x2x3x4=24");
    run_test(5, "1x2x3x4x5=120");
    run_test(6, "1x2x3x4x5x6=720");

    return 0;
}
