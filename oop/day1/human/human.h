#ifndef define HUMAN_H
#define HUMAN_H

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
enum Drink
{
        Water,
        Green_tea,
        Juice,
        Alcohol
};

enum Food
{
        Fruits,
        Vegetables,
        Fish,
        Fast_food
};
class Human
{
        private:
                Gender _Gender;
                EyeColour _EyeColour;
                HairColour _HairColour;
                int _Height;
        protected:
                string _Name;
                int _MentalHealth;
                int _HealthLevel;
                int _Weight;


        public:
                Human(string name, Gender gender, EyeColour eye_colour, HairColour hair_colour, int weight, int height)
                {
                }
		void Walk();
		void Sleep(int);
		void Eat(Food);
		void Drink(Drink);
};

#endif




