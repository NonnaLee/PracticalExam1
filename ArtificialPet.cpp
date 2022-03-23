#include "ArtificialPet.h"
#include <iostream>

bool ArtificialPet::isHungry()
{
	if (fullness < 0) {
		std::cout << "Fullness: " << fullness << " Is Hungry " << std::endl;
		return true;
	}
	std::cout << "Fullness: " << fullness << " Not Hungry " << std::endl;
	return false;
}

void ArtificialPet::feed()
{
	int untilFull = 10 - fullness;
	fullness += (untilFull / 2)+1;
	std::cout << "Feed - Fullness:" << fullness << std::endl;
}

void ArtificialPet::play(int minutes)
{
	fullness -= playEnergyUsage * minutes;
	std::cout << "Play - Fullness:" << fullness << std::endl;
}
