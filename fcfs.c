#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    printf("Enter number of processes\n");
    int n;
    scanf("%d",&n);
    int p[n]; //array for processes
    int at[n]; //array for arrival time
    int bt[n]; //array for burst time
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    printf("Enter arrival time and burst time for processes\n");
    for(int i=0;i<n;i++)
    {
        printf("For process %d\na. Enter arrival time ",p[i]);
        scanf("%d",&at[i]);
        printf("b. Enter burst time ");
        scanf("%d",&bt[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1] || (at[j] == at[j + 1] && bt[j] > bt[j + 1])) {
                // swap in array1
                int temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                // Swap corresponding elements in array2
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                //Swap for BT
                temp =bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
            }
        }
    }
    printf("P AT BT\n");
    for(int i=0;i<n;i++)
    {
    printf("%d %d %d\n",p[i],at[i],bt[i]);
    }

    int ct[n]; int sum=0;
    for(int i=0;i<n;i++)
    {
    sum = sum +bt[i];
    ct[i]=sum;   
    }

    int tat[n],wt[n];
    for(int i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=abs(tat[i]-bt[i]);
    }

    printf("P\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++)
    {
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    return 0;
}