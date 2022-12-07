
#include <iostream>

#include "Day1.h"
using namespace std;

int main(int argc, char* argv[])
{
    Day1 day1;
    cout << "The elf with most calories has:" << day1.getElfWithMostCalories() << endl;
    cout << "The sum of the top three elfs is: " << day1.getTopThreeTotalCalories() << endl;
    return 0;
}
