#include<stdio.h>
void main()
{
    int T;
    printf("Enter the Duration of the Party : ");
    scanf("%d",&T);
    int E[T],L[T];
    printf("The Array of Guests Entering : ");
    for(int i=0;i<T;i++)
        scanf("%d",&E[i]);
    printf("The Array of Guests Leaving : ");
    for(int i=0;i<T;i++)
        scanf("%d",&L[i]);
    int max=0,inst=0;
    for(int i=0;i<T;i++)
    {
        inst+=E[i]-L[i];
        if(inst>max)
            max=inst;
    }
    printf("The Maximum Number of Guests Present at a time is : %d",max);
}