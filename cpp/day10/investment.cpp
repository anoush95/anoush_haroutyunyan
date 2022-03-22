#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
 
double percentage (double principal_amount, double interest_rate);
 
int main (int argc, char* argv[]) 
{
 
        time_t now = time(0);
        char* date_time = ctime(&now);
        string date[5];
        int x = 0;
        for (int i = 0; date_time[i] != '\0'; i++) 
	{
                if (date_time[i] == ' ') 
		{
                        x++;
                        continue;    
                }
                date[x] += date_time[i];
        }
 
        int day = stoi(date[2]);
        int year = stoi(date[4]);
        int m;
        string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < 12; i++) 
	{
                if (months[i] == date[1]) 
		{
                        m = i;
                }
        }
        double principal_amount = atof(argv[1]);
        double interest_rate = atof(argv[2]);  
       	double month_number = atof(argv[3]);
	double monthly_income;
        cout << "Principal amount: " << principal_amount << " amd " <<  endl;
        for(int i = 0; i < atoi(argv[3]); i++) 
	{
                monthly_income = percentage (principal_amount, interest_rate);
                principal_amount += monthly_income;
                cout << m + 1 << "/" << day << "/" << year << "| " << principal_amount << "amd | " << monthly_income << endl;
                m++;
                if (m == 12) 
		{
                        m = 0;
			year++;
                }
        }
 
        return 0;
}
 
double percentage (double principal_amount, double interest_rate) 
{
 
        return principal_amount * ((interest_rate / 100) / 12);
}
 
                                                                                                                                                                      
