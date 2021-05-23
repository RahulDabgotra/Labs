/* Implementation of Banker's Algorithm using C */

#include <stdio.h>
struct process
{
    int all[6], max[6], need[6], finished, request[6], c[6];
} p[10];

int avail[6], sseq[10], ss = 0, check1 = 0, check2 = 0, m, n, pid, work[6];

void main()
{
    int safeseq(void);
    int ch, i = 0, j = 0, k, pid, ch1;
    int vcheck = 0, wcheck = 0;
    do
    {
        printf("\nMenu: \n 1) Input   2) New Request   3)Safe State or Not   4) Exit");
        printf("\nEnter your choice (1-4) :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter the number of processes: ");
            scanf("%d", &n);
            printf("\nEnter the number of resources: ");
            scanf("%d", &m);
            printf("\nEnter the max unit of each resource: \n");
            for (j = 0; j < m; j++)
            {
                scanf("%d", &avail[j]);
            }
            printf("\nEnter max matrix: \n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    scanf("%d", &p[i].max[j]);
                }
            }
            printf("\nEnter allocation matrix : \n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    scanf("%d", &p[i].all[j]);
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    p[i].need[j] = p[i].max[j] - p[i].all[j];
                    avail[j] = avail[j] - p[i].all[j];
                }
            }
            break;
        case 2:
            vcheck = 0;
            wcheck = 0;
            printf("\n\tRequesting Process ID:");
            scanf("%d", &pid);
            printf("Enter the request of process \n");
            for (j = 0; j < m; j++)
            {
                scanf("%d", &p[pid].request[j]);
                if (p[pid].request[j] > p[pid].need[j])
                    vcheck = 1;

                if (p[pid].request[j] > avail[j])
                    wcheck = 1;
            }
            if (vcheck == 1)
                printf("\n\tThe process exceeds its max need: Terminated");
            else if (wcheck == 1)
                printf("\n\tLack of resources : Process state is Wait");
            else
            {
                for (j = 0; j < m; j++)
                {
                    avail[j] = avail[j] - p[pid].request[j];
                    p[pid].all[j] = p[pid].all[j] + p[pid].request[j];
                    p[pid].need[j] = p[pid].need[j] - p[pid].request[j];
                }
                ch1 = safeseq();
            }
            break;
        case 3:
            if (safeseq() == 1)
                printf("\n\tThe system is in safe state");
            else
                printf("\n\tThe system is not in safe state");
            break;
        case 4:
            break;
        } // end of switch loop
    } while (ch != 4);
}

int safeseq()
{
    int tj, tk, i, j, k;
    ss = 0;
    for (j = 0; j < m; j++)
        work[j] = avail[j];

    for (j = 0; j < n; j++)
        p[j].finished = 0;

    for (tk = 0; tk < m; tk++)
    {
        for (j = 0; j < n; j++)
        {
            if (p[j].finished == 0)
            {
                check1 = 0;
                for (k = 0; k < m; k++)
                if (p[j].need[k] <= work[k])
                    check1++;

                if (check1 == m)
                {
                    for (k = 0; k < m; k++)
                    {
                        work[k] = work[k] + p[j].all[k];
                        p[j].finished = 1;
                    }
                    sseq[ss] = j;
                    ss++;
                }
            }
        }
    }
    check2 = 0;
    for (i = 0; i < n; i++)
        if (p[i].finished = 1)
            check2++;
    if (check2 >= n)
    {
        printf("\n\tThe system is in safe state ");
        for (tj = 0; tj < n; tj++)
            printf("P%d,", sseq[tj]);
        return 1;
    }
    else
        printf("\n\tThe system is NOT in safe state");
    return 0;
}