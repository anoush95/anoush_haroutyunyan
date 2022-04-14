#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "../homoSapience.h"

class Employee:public HomoSapience
{
        protected:
                int _Salary;

        public:
                Employee (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion, int salary):HomoSapience(name, gender, eye_colour, hair_colour, weight, height)
                {
		}
		virtual void Work();
                int SetSalary(int);
		int GetSalary();
};

#endif
