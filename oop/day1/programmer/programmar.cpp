#include <iostream>
#include "programmer.h"

using namespace std;

Programmer (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion, int salary, string programming_languages, int bonus):Employee(name, gender, eye_colour, hair_colour, weight, height, salary)
{
	_Programming_Languages = programming_languages;
        _Bonus = bonus;
}
        void Programmer::Work(int working_hours)
        {
        	if (working_hours > 8)
                _Bonus;
        }

