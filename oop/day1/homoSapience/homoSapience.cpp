#include <<iostream>>
#include "homoSapience.h"
using namespace std;

HomoSapience (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion):Human(name, gender, eye_colour, hair_colour, weight, height)
{
	_Surname = surname;
        _Address = address;
        _Nationality = nationality;
        _Religion = religion;
}
string HomoSapience::SetFullName(string name, string surname)
{
        _Name = name;
        _Surname = surname;
}
string HomoSapience::GetFullName()
{
        return _Name + " " + _Surname;
}
string HomoSapience::Speak(string speech)
{
        return speech;
}
void HomoSapience::DoYoga()
{
        if (_HealthLevel <= 95)
        {
        	 _HealthLevel += 5;
                 _Weight -= 5;
        }
}
void HomoSapience::Meditation()
{
	if (_MentalHealth <= 95)
        	 _MentalHealth += 5;
}




