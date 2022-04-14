#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "../employee/employee.h"

class Programmer:public Employee
{
        private:
                string _Programming_Languages;
                int _Bonus;
        public:
                Programmer (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion, int salary, string programming_languages, int bonus):Employee(name, gender, eye_colour, hair_colour, weight, height, salary)
                {
		}
	void Work(int working_hours);
};

#endif

