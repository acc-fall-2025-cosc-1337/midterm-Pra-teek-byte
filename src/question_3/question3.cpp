#include "question3.h"
#include <cstdlib>  
#include <ctime>    

int roll_die()
{
    // Seed rand only once
    static bool seeded = false;
    if (!seeded)
    {
        srand(time(0));
        seeded = true;
    }

    return (rand() % 6) + 1;
}
