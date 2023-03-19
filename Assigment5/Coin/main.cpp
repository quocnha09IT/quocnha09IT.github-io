#include <iomanip>
#include <iostream>
#include <string>
#include "coin.h"

using std::cout;
using std::cin;

int main()
{
    Coin coinToss;
   
    const int NUM_TOSSES = 20;
   
    cout << "\t\tCOIN TOSS SIMULATOR\n\n";
    cout << "I will now perform an initial toss.\n\n";
    cout << "The side facing up is: " << coinToss.getSideUp() << "\n\n";
    cout << "I will now toss the coin " << NUM_TOSSES << " times.";

    cout << "\n(Press a key to continue)\n";
    cin.ignore();

    for (int i = 0; i < 20; i++)
    {
        coinToss.toss();
        coinToss.sideCount();

        cout << "Toss #" << std::setw(2)  << (i + 1) << ": "
                              << std::setw(18) << coinToss.getSideUp() << "\n";
    }

    cout << "\nThe number of times 'Heads' was facing up: " << coinToss.getCntHeads() << "\n";
    cout << "The number of times 'Tails' was facing up: "   << coinToss.getCntTails();
    cout << "\n\nThis program will now exit. Have a nice day!";
   
    cin.ignore();
    return 0;
}