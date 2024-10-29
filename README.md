# FCFS-CPU-Scheduling-Algorithm-Operating-System

## Description
This repository contains an implementation of the **First-Come, First-Served (FCFS)** scheduling algorithm in [language used, e.g., Java, Python, etc.].

## Usage
Clone the repository and run the code to see the FCFS scheduling in action.

```bash
https://github.com/J-Architect-SUNIL/FCFS-CPU-Scheduling-Algorithm-Operating-System.git

**## Output**
Enter the number of Processes: 6
Enter Process ID, Arrival Time, and Burst Time for process 1:
1 0 4
Enter Process ID, Arrival Time, and Burst Time for process 2:
2 1 5
Enter Process ID, Arrival Time, and Burst Time for process 3:
3 2 6
Enter Process ID, Arrival Time, and Burst Time for process 4:
4 3 8
Enter Process ID, Arrival Time, and Burst Time for process 5:
5 4 2
Enter Process ID, Arrival Time, and Burst Time for process 6:
6 5 4

P ID    AT      BT      ST      CT      TAT     WT
1       0       4       0       4       4       0
2       1       5       4       9       8       3
3       2       6       9       15      13      7
4       3       8       15      23      20      12
5       4       2       23      25      21      19
6       5       4       25      29      24      20

Gantt Chart
------------------------------------------
|  1   |  2   |  3   |  4   |  5   |  6   |
------------------------------------------
0     4     9     15     23     25     29
