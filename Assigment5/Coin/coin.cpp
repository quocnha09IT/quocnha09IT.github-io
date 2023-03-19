#include <cstdlib>
#include <ctime>
#include "coin.h"

void Coin::initRNG()
{
    srand((unsigned int)time(NULL));
}



void Coin::toss()
{
    const int HEADS = 1;
    const int TAILS = 2;

    unsigned int sides = 0;

    sides = HEADS + rand() % TAILS;

    if (sides == HEADS)
    {
        sideUp = "Heads";
    }
    else
    {
        sideUp = "Tails";
    }
}



void Coin::sideCount()
{
    sideUp == "Heads" ? cntHeads++ : cntTails++;
}
