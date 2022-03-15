#include <iostream>
using namespace std;

int myAtoi (char* string) 
{
   int result = 0;
   for (int i = 0; string[i] != '\0'; i++) 
   {
	if(string[i] >= 48 && string[i] <= 57)
	{
      		result = result * 10 + string[i] - '0';
	}
	else
	{
		result = 0;
	}
   } 
   return result;
}
