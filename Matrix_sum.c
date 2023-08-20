/* Find the sum of rows and columns of matrix of given order. */
#include <stdio.h>
int main( )
{
    int r,c;
    printf("enter size of row\n");
    scanf("%d",&r);
    printf("enter size of column\n");
    scanf("%d",&c);
    int arr[r][c];
    int sumr=0,sumc=0;
    printf("enter array elements");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int i,j;
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            sumr=sumr+arr[i][j];   //sum of each row
        }
        printf("sum of %d row is %d \n",i+1,sumr);
        sumr=0;
    }
    for(j=0; j < c ; j ++)
    {
        for( i=0;i<r;i++)
        {
            sumc=sumc+arr[i][j];    //sum of each column
        }
        printf("sum of %d column is %d \n",j+1,sumc);
        sumc=0;
    }

    return 0;
}
