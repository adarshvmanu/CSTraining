#include<stdio.h>
void main()
{
    int a[]={0,1,8,0,2,6};
    int n=6,pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[pos]=a[i];
            pos++;
        }
    }
    while(pos<n)
    {
        a[pos++]=0;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}