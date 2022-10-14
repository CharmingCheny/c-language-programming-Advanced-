#include <stdio.h>
int main() 
{
	char killer;
	for (killer = '1'; killer <= '4'; killer++) 
	{
	if (((killer != '1') + (killer == '3') + (killer == '4') + (killer != '4')) == 3) 
		{
			printf("%c\n",killer);
		}
	}
	return 0;
}

