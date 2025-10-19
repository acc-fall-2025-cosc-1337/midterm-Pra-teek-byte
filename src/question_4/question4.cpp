#include "question4.h"
#include <sstream> // for ostringstream

string get_factorial_sequence(int n)
{
    if (n < 1) return ""; // invalid input

    long long factorial = 1;
    ostringstream sequence;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sequence << i;
        if (i != n)
            sequence << "x";
    }

    sequence << "=" << factorial;

    return sequence.str();
}
