#include<stdio.h>
void main()
{
    int a[]={0,1,8,0,2,6}
    int n=6,pos=0;
    for(int i=0;i<s;i++)
    {
        if(a[i]!=0)
        {
            a[pos]=a[i];
            pos++;
        }
    }
    while(pos<s)
    {
        a[pos++]=0;
    }
}