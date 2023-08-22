/* Count how many even numbers are there in a given integer 2D array. Hint: Linear Search */

#include <stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows and columns");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("enter array elements");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    } int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)     //checking for even
            count++;           //counting even numbers
        }
    }
    printf("number of even elements is %d",count);
    return 0;
}
