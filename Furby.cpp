
#include "Furby.h"
#include <iostream>

Furby::Furby() {
	playEnergyUsage = 2;
}
void Furby::dance(int minutes)
{
	fullness -= 3 * minutes;
	std::cout << "Dance - Fullness: " << fullness << std::endl;
}
