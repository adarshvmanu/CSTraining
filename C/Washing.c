#include<stdio.h>
void main()
{
    int weight;
    printf("Enter the Weight of Clothes : ");
    scanf("%d",&weight);
    if(weight>7000)
        printf("Overloaded");
    else if(weight<0)
        printf("Invalid Input");
    else{
        if(weight==0)
            printf("Time Estimated : 0 Minutes");
        else if(weight<=2000)
            printf("Time Estimated : 25 Minutes");
        else if(weight<=4000)
            printf("Time Estimated : 35 Minutes");
        else if(weight<=7000)
            printf("Time Estimated : 45 Minutes"); 
    }
}