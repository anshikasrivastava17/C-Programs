/* Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and, also delete an element from jth position of ‘a1’. */


#include<stdio.h>
#include<string.h>

void insert(int*, int);
void delete(int*, int);

int main( )
{
    int n, sum=0, a[30];
    printf("Enter size of array - ");
    scanf("%d", &n);
    printf("Enter elements of array - ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    insert(a,n);
    delete(a,n);
}

void insert(int *arr, int n)
{
    int pos, num;

    printf("Enter the position to enter number - ");
    scanf("%d", &pos);
    pos--;

    printf("Enter the number to enter at position - ");
    scanf("%d", &num);

    if(n==30)
        printf("\nERROR : Memory Exceeded");
    else
    {
        for(int i=n+1; i>pos; i--)  //shifting values
            arr[i]=arr[i-1];
        arr[pos]=num;               //insertion
        n++;

        printf("\nElements of new array - ");
        for(int i=0; i<n; i++)
            printf("%d ",arr[i]);
    }
}

void delete(int *arr, int n)
{
    int pos;
    printf("\nEnter position to delete element - ");
    scanf("%d", &pos);
    pos--;

    for(int i=pos; i<n; i++)
        arr[i]=arr[i+1];           //deletion

    printf("\nElements of new array - ");
        for(int i=0; i<n; i++)
            printf("%d ",arr[i]);
}
