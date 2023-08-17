#include <stdio.h>
void main()
{
    int p, n, fee=0;
    printf("Enter the number of Patients : ");
    scanf("%d", &n);
    if (n <= 20 && n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the Age of Patient %d : ",i+1);
            scanf("%d",&p);
            else if(p>0&&p<17){
                fee+=200;
            }
            else if(p>=17 && p<=40){
                fee+=400;
            }
            else if(p>40&&p<=120)
                fee+=300;
        }
        printf("Total Fee Collected : %d",fee);
    }
    else
    {
        printf("Maximum Number of Patients a Day is 20");
    }
}
