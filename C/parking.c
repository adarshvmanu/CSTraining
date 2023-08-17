#include<stdio.h>
void main()
{
    int R,C;
    printf("Enter the Number of Rows and Columns : ");
    scanf("%d%d",&R,&C);
    int P[R][C];
    printf("Enter the Parking Spaces : \n");
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
        {
            scanf("%d",&P[i][j]);
        }
    int max=0,row;
    for(int i=0;i<R;i++)
    {
        int Filled=0;
        for(int j=0;j<C;j++)
        {
            if(P[i][j]==1)
                Filled++;
        }
        if(Filled>max){
            row=i;
            max=Filled;
        }
    }
    printf("Row with Most Number of Parking Spaces Filled : %d\n",row);
}