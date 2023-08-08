/* Given an array of size n,which contains the elements from 0 to n-1, find all the elements 
present more than once,in the given array and return the ans in ascending order.  */

#include<stdio.h>
int main()
{
    printf("Enter end limit n\n");
    int n;
    scanf("%d",&n);
    printf("Enter array elements\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int c=0,duparr[n],temp;
    int count; //to keep track of duplicate elements
    for(int i=0; i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
            count++;
        }
    
    if(count>0) //duplicate is encountered
    {
        int isDuplicate = 0;
            for (int k = 0; k < c; k++) {
                if (arr[i] == duparr[k]) {
                    isDuplicate = 1;
                    break;
                }
            }
            if (!isDuplicate) {
                duparr[c] = arr[i];
                c++;
            }
        }
    }



    printf("Duplicate elements are \n");
     for(int i=0; i<c-1; i++)
    {
         for (int j = 0; j < c - i - 1; j++) {
            if (duparr[j] > duparr[j + 1]) {
                temp = duparr[j];
                duparr[j] = duparr[j + 1];
                duparr[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        printf("%d\n",duparr[i]);
    }
    return 0;
}
