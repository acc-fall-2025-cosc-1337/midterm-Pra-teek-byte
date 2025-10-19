#include <iostream>
#include <iomanip>
#include <cmath>
#include "../../src/question_2/question2.h" 

using namespace std;

void run_test(double sales, double expected)
{
    double result = get_sales_commission(sales);

    cout << fixed << setprecision(2);
    cout << "Sales: " << sales 
         << " | Expected: " << expected 
         << " | Got: " << result << " ";

    if (fabs(result - expected) < 0.01)
        cout << "✅ PASS" << endl;
    else
        cout << "❌ FAIL" << endl;
}

int main()
{
    cout << "---- Running Commission Function Tests ----" << endl;

    // Each test case from your table
    run_test(100, 5);
    run_test(750, 45);
    run_test(1100, 77);
    run_test(1750, 140);
    run_test(-50, 0);

    cout << "-------------------------------------------" << endl;

    return 0;
}
