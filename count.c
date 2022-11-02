
#include"mini.h"
int count(char str[], char c)
{
		int co= 0;
		int i=0;
		while(str[i] != '\0')
		{   if(str[i] == c)
			{
				co++;
			}
			i++;
		}
		printf("Total occurrence of %c = %d", c, co);
	
	return 0;
}
