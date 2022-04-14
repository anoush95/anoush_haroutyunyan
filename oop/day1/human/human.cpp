#include <iostream>
#include "human.h"

using namespace std;

Human::Human(string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height)
{
	 _Name = name;
         _Gender = gender;
         _EyeColour = eye_colour;
         _HairColour = hair_colour;
         _Weight = weight;
         _Height = height;
         _HealthLevel = 100;
         _MentalHealth = 100;
}
void Human::Walk()
{
	if (_HealthLevel < 100)
        {
        	++_HealthLevel;
                --_Weight;
        }
}
void Human::Sleep(int hours)
{
        if (_MentalHealth < 100)
        {
        	if(hours >= 6 && hours <=8)
                	++_MentalHealth;
        }
}
void Human::Eat(Food food)
{
	if (_HealthLevel < 98)
        {
        	if (food == Fruits || food == Vegetables)
                	_HealthLevel += 2;
                else if (food == Fish)
                        ++_HealthLevel;
        }
}
void Human::Drink(Drink drink)
{
        if (_HealthLevel < 100)
        {
                if (drink == Water || drink == Green_tea || drink == Juice)
                                        ++_HealthLevel;
        }
        else if (_HealthLevel > 2 && drink == Alcohol)
        	_HealthLevel -= 2;
}
