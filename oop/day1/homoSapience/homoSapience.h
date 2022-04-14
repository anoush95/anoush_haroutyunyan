#ifndef HOMO_SAPIENCE_H
#define HOMO_SAPIENCE_H

#include "../human/human.h"
class HomoSapience:public Human
{
        private:
                string _Surname;
                string _Address;
                Nationality _Nationality;
                Religion _Religion;
        public:
                HomoSapience (string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height, string surname, string address, Nationality nationality, Religion religion):Human(name, gender, eye_colour, hair_colour, weight, height)
                {
		}
	        string SetFullName(string, string);
		string GetFullName();
		string Speak(string);
		void DoYoga();
		void Meditation();
};
#endif







