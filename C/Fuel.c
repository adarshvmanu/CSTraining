#include<stdio.h>
void main()
{
    float diesel,distance,f;
    printf("Enter the Quantity of Diesel Filled : ");
    scanf("%d",&diesel);
    printf("Enter the Distance Covered : ");
    scanf("%d",&distance);
    if(diesel<=0||distance<=0)
    {
        printf("Invalid Input");
    }
    else
    {
        f=(diesel/distance)*100;
        printf("%.2f Litres per 100 Kilometer",f);
        f=(distance*0.6214)/(diesel*0.2642);
        printf("\n%.2f Miles per Gallon",f);
    }
}