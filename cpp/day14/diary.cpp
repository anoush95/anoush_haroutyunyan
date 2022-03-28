#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string week_day (int n);
 
struct Diary 
{
	string note;
        string date;
} 	
	diary;

enum WeekDay 
{
	Mon = 1, 
	Tue,
	Wed, 
	Thu, 
	Fri, 
	Sat, 
	Sun
};
 
int main ()
{
	string command;
	while (command != "exit")
	{
		cout << "Input the date: ";
        	cin >> diary.date;
		string date = diary.date;
        	diary.date += ".txt";

		cout << "Choose the day of the week(1 = Mon, 2 = Tue, 3 = Wed, 4 = Thu, 5 = Fri, 6 = Sat, 7 = Sun): ";
		int day;
		cin >> day;
		string week_day (int n);

        	cout << "Add note: ";
        	ofstream note;
        	note.open ("./notes/" + diary.date, ios::app);
                cin.ignore ();
               	getline (cin, diary.note);
              	note << week_day (day) << " " << date << endl << "Note: " << diary.note << endl;

		cout << "Do you want to add another note?(add/exit)";
                cin >> command;
                if (command == "exit")
		{
			break;
		}	
        note.close ();
	}	
return 0;
}
string week_day (int n)
{
        switch (n)
        {
                case 1: return "Mon";
                        break;
                case 2: return "Tue";
                        break;
                case 3: return "Wed";
                        break;
                case 4: return "Thu";
                        break;
                case 5: return "Fri";
                        break;
                case 6: return "Sat";
                        break;
                case 7: return "Sun";
                        break;
        }
	return 0;
}



