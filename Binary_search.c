#include <stdio.h>
int main( )
{
    int n;
    printf("enter number of array elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    printf("enter element to be found\n");
    int n1;
    scanf("%d",&n1);
    int first=0,last=n-1;
     int mid = (first + last)/2;      //middle index
   while( first <= last )
   {  
      if ( arr[mid] < n1 )       
      {  
        first = mid + 1;       //resizing lower limit
      }
      else if ( arr[mid] == n1 )
      {  
    printf("element is at index %d",mid);
    break;
      }
      else
      {  
         last = mid - 1;     //resizing upper limit
      }  
      mid = (first+last)/2;
   }  
   if ( first > last )
   {
       printf ("element not found");
   }
       
    return 0;
}
