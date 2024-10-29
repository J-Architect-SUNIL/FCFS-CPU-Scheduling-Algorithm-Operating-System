//First Come First Serve (FCFS) CPU Scheduling Algorithm --------Operating System/.


/*The First-Come, First-Served (FCFS) scheduling algorithm is one of the simplest types of CPU scheduling algorithms. 
It allocates CPU resources to processes in the order of their arrival in the queue, 
meaning the first process that arrives gets executed first.*/


#include<stdio.h>
#include<string.h>

int main()
{
    int r, i, j;

    // Prompt user to enter the number of processes
    printf("Enter the number of Processes: ");
    scanf("%d", &r);

    // Array to store labels for output display
    char strValues[7][5] = {"P ID", "AT", "BT", "ST", "CT", "TAT", "WT"};

    // Declare arrays for process ID, arrival time, burst time, start time, completion time, turn around time, and waiting time
    int pid[r], at[r], bt[r], st[r], ct[r], tat[r], wt[r];

    // Loop to input each process's ID, Arrival Time, and Burst Time
    for (i = 0; i < r; i++) 
    {
        printf("Enter Process ID, Arrival Time, and Burst Time for process %d:\n", i + 1);
        scanf("%d %d %d", &pid[i], &at[i], &bt[i]);
    }

    // Initialize first process's start time, completion time, turnaround time, and waiting time
    st[0] = at[0];
    ct[0] = at[0] + bt[0];
    tat[0] = ct[0] - at[0];
    wt[0] = tat[0] - bt[0];

    // Loop to calculate ST, CT, TAT, and WT for each remaining process
    for(i = 1; i < r; i++)
    {
        // Set start time depending on whether the CPU is idle or not
        if (ct[i - 1] > at[i]) 
        {
            st[i] = ct[i - 1];
        }       
        else 
        {
            st[i] = at[i];
        }
        // Calculate completion time, turnaround time, and waiting time for each process
        ct[i] = st[i] + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    // Print table headers
    printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\n", strValues[0], strValues[1], strValues[2], strValues[3], strValues[4], strValues[5], strValues[6]);

    // Display computed values for each process
    for (i = 0; i < r; i++) 
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], st[i], ct[i], tat[i], wt[i]);
    }

    // Print Gantt Chart
    printf("\n\nGrantt Chart\n");

    // Print horizontal line for Gantt Chart
    for(i = 0; i < 7 * r; i++)
    {
        printf("-");
    }
    printf("\n");

    // Print process IDs within the Gantt Chart
    for(i = 0; i < r; i++)
    {
        printf("|  %d   ", pid[i]);
    }
    printf("|");
    printf("\n");

    // Print another horizontal line for Gantt Chart
    for(i = 0; i < 7 * r; i++)
    {
        printf("-");
    }
    printf("\n");

    // Print start and completion times on the Gantt Chart
    if (r == 1)
    {
        printf("%d     ", st[0]);
    }
    else
    {
        printf("%d     ", st[0]);
        for(i = 0; i < r; i++)
        {
            printf("%d     ", ct[i]);
        }
    }

    return 0;
}
