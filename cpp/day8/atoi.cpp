#include <iostream>
#include "atoi.h"
using namespace std;

int myAtoi (char* string)
{
        int result = 0;
        for (int i = 0; string[i] != '\0'; i++)
        {
                if(string[i] >= '0' && string[i] <= '9')
                {
                        result = result * 10 + string[i] - '0';
                }
                else
                {
                        result = 0;
                }
        }
        if (string[0] == '-')
        {
                result -= result * 2;
        } 
return result;
}






