#include <iostream>

using namespace std;

enum Gender
{
	Male,
	Female
};
enum EyeColour
{
	Blue,
	Green,
	Black,
	Brown
};
enum HairColour
{
	black,
	brown,
	red,
	grey
};
enum Nationality
{
        Armenian,
        Russian,
        British,
        French,
        Italian
};
enum Religion
{
        Christianity,
        Islam,
        Hinduism
};

class Human 
{
	private:
		Gender _Gender;
		EyeColour _EyeColour;
		HairColour _HairColour;
		int _Weight;
		int _HealthLevel;
	protected:
		string _Name;
	public:
		Human(string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight) 
		{
			_Name = name;
			_Gender = gender;
			_EyeColour = eye_colour;
			_HairColour = hair_colour;
			_Weight = weight;
		}
		void Walk()
		{
			cout << _Name << " is walking" << endl;
			_HealthLevel++;
			_Weight--;
		}
		void Eat(string food)
		{
      			if (food == "fruits" || food == "vegetables")
			{
				_HealthLevel++;		
			}
			else if (food == "fastfood")
			{
				_HealthLevel--;
				_Weight++;
			}

    		}	
};

class HomoSapience:public Human
{
	private:
		string _Surname;
		string _Address;
		Nationality _Nationality;
		Religion _Religion;
	public:
		HomoSapience (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, string surname, string address, Nationality nationality, Religion religion):Human(name, gender, eye_colour, hair_colour, weight) 
		{
			_Surname = surname;
			_Address = address;
			_Nationality = nationality;
			_Religion = religion;
		}
		void Think()
		{
		      cout << _Name << " is thinking" << endl;
		}
		void Speak()
                {
                      cout << _Name << " is speaking" << endl;
                }
		void Work()
                {
                      cout << _Name << " is working" << endl;
                }
		void Party()
                {
                      cout << _Name << " is partying" << endl;
                }
};

class Programmer: public HomoSapience 
{
	public:
		void Too_much_work()
		{
			cout << "Programmers work too much" << endl;
		}
};	

int main ()
{
	return 0;
}
