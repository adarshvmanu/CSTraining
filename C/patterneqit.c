#include<stdio.h>
void main()
{
    int r;
    printf("Enter the Number of Rows : ");
    scanf("%d",&r);
    int k=r-1;
    for(int i=0;i<r;i++)
    {
        for(int j=k;j>0;j--)
            printf(" ");
        k--;
        for(int j=1;j<=(2*(i+1))-1;j++)
            printf("*");
        printf("\n");
    }
}