#include <iostream>
#include "Furby.h"

using namespace std;

int main()
{
    Furby furby = Furby();
    furby.isHungry();
    furby.play(1);
    furby.isHungry();
    furby.dance(1);
    furby.isHungry();
    furby.feed();
    furby.isHungry();
    furby.feed();
    furby.isHungry();
    furby.feed();
    furby.isHungry();
}

