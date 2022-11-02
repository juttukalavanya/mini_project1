#include "mini.h"

int compare(char str1[], char str2[])
{
	static int i = 0; // store the current index we are at in string

	// calculating the length of str1
	int l1 = strlen(str1);

	//calculating the length of str2
	int l2 = strlen(str2);
	static int c = 0; // store number of equal characters at same index 

	// if the length of both strings are not equal then it will return as 0
	if (l1 != l2)
	{
		return 0;
	}

	// if value of i is less than length of str1 
	// then their are still more characters left to compare
	else if (i < l1)
	{
		if (str1[i] == str2[i])
			c++; // count number of equal characeter at same index
		i++;
		compare(str1, str2);
	}

	if (c == i)
	{
		return 1;
	}
	return 0;

}
