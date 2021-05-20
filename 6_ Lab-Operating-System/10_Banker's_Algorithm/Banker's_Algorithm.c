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
    int ch, i = 0, j = 0, pid, ch1;
    int vcheck = 0, wcheck = 0;

    do
    {
        printf("\n Menu: \n 1.Input \n 2.New Request \n 3.Safe State or Not \n 4.Exit");
        printf("\n Enter your choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter the number of processes: ");
            scanf("%d", &n);
            printf("\n Enter the number of resources: ");
            scanf("%d", &m);
            printf("\n Enter the max unit of each resource: ");
            for (j = 0; j < m; j++)
            {
                scanf("%d", &avail[j]);
            }
            printf("\n Enter max matrix:");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    scanf("%d", &p[i].max[j]);
                }
            }
            printf()

                break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            break;
        }
    } while (ch != n);
    return 0;
}