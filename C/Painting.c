#include<stdio.h>
void main()
{
    int ni,ne,si,se,cost=0;
    printf("Enter the Number of Inteior Walls : ");
    scanf("%d",&ni);
    printf("Enter the Number of Exterior Walls : ");
    scanf("%d",&ne);
    if(ni>0)
    {
        for(int i=0;i<ni;i++){
            printf("Enter the Surface Area of Interior Walls %d : ",i+1);
            scanf("%d",&si);
            cost+=si*18;
        }
    }
    if(ne>0)
    {
        for(int i=0;i<ne;i++){
            printf("Enter the Surface Area of Exterior Walls %d : ",i+1);
            scanf("%d",&se);
            cost+=se*12;
        }
    }
    printf("\nTotal Cost of Painting : %d",cost);
}