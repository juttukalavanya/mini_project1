#include"mini.h"
void display(struct matrix s3){
	int i,j,k;        
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{

				printf("%d\t",s3.arr[i][j][k]);
			}
		   printf("\n");

		}
			printf("\n");

	}
}
