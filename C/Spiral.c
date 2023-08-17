#include<stdio.h>

void main()
{
    int r,c;
    printf("Enter the Order of the Matrix : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the Elements of the Matrix : \n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("The Spiral Order of the Matrix is : \n");
    int l=0,k=0;
    while(k<r&&l<c){
        for(int i=l;i<c;i++)
            printf("%d",a[k][i]);
    }
}   