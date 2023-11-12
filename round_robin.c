#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter the number of processes: ");
    int n;
    scanf("%d", &n);

    int p[n];
    int at[n];
    int bt[n];
    int remaining_bt[n]; // Array to keep track of remaining burst time

    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }

    printf("Enter arrival time and burst time for processes:\n");
    for (int i = 0; i < n; i++) {
        printf("For process %d:\n", p[i]);
        printf("a. Enter arrival time: ");
        scanf("%d", &at[i]);
        printf("b. Enter burst time: ");
        scanf("%d", &bt[i]);
        remaining_bt[i] = bt[i]; // Initialize remaining burst time
    }

    int quantum;
    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    int ct[n], wt[n], tat[n], rt[n];
    int t = 0;
    int completed = 0; // To keep track of the number of completed processes

    while (completed < n) {
        bool done = true;

        for (int i = 0; i < n; i++) {
            if (remaining_bt[i] > 0) {
                if (remaining_bt[i] <= quantum) {
                    t += remaining_bt[i]; // Execute the remaining time
                    ct[i] = t; // Record completion time
                    remaining_bt[i] = 0; // Mark process as completed
                    completed++;
                } else {
                    t += quantum; // Execute the time quantum
                    remaining_bt[i] -= quantum; // Reduce burst time
                }
                done = false; // There are pending processes
            }
        }

        if (done) {
            break; // All processes are done
        }
    }

    // Calculate waiting time, turnaround time, and response time
    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = wt[i];
    }

    // Print process information
    printf("P AT BT CT TAT WT RT\n");
    for (int i = 0; i < n; i++) {
        printf("%d %d %d %d %d %d %d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i], rt[i]);
    }

    return 0;
}
