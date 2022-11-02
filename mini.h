#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct matrix 
{
	int arr[4][3][2];
};

void display(struct matrix s3);
int assign(struct matrix *s3);
void pattern (int n);
int compare(char str1[], char str2[]);
int count(char str1[], char c);
