#include"mini.h"
int assign(struct matrix *s3)
{
	int i,j,k;
	int *ptr;
        for(i=1;i<2;i++)
        {
                for(j=1;j<2;j++)
                {
                        for(k=1;k<2;k++)
                                ptr=&s3->arr[i][j][k];
                }
        }
        return *ptr;
}
