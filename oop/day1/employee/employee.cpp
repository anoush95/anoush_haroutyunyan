#include <iostream>
#include "employee.h"

using namespace std;

	Employee (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion, int salary):HomoSapience(name, gender, eye_colour, hair_colour, weight, height)
        {
        	int _Salary = salary;
        }
        virtual void Employee::Work() = 0;
        int Employee::SetSalary(int salary)
        {
                _Salary = salary;
        }
        int Employee::GetSalary()
        {
        	return _Salary;
        }


