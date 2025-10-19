#include "../../src/question_2/question2.h"
#include "question2.h"


double get_sales_commission(double sales)
{
    // Handle invalid (negative) sales input
    if (sales < 0)
        return 0;

    // Apply the bonus pay table
    if (sales <= 499)
        return sales * 0.05;
    else if (sales <= 999)
        return sales * 0.06;
    else if (sales <= 1499)
        return sales * 0.07;
    else
        return sales * 0.08;
}
