#pragma once
class ArtificialPet
{
	protected:
		int fullness = 0;
		int playEnergyUsage;
	public:
		bool isHungry(); //returns a boolean representing whether the pet is hungry.pets are hungry whenever their fullness value goes negative.pets are full when their fullness reaches 10.
		void feed(); //increases the fullness level of the pet by 1 / 2 of(the current difference between the pet's fullness and the maximum fullness of 10) + 1   ie the hungrier a pet is, the more it will eat.
		void play(int minutes); //increases the hunger of the pet.Note there is no general implementation of play.All pets have different metabolisms and get hungry at different rates.
};

