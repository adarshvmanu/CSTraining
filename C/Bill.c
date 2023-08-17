#include<stdio.h>
#include<stdlib.h>
void main(){
    int sum=0,choice,nump,numcd,numpu;
    printf("Menu\n");
    printf("1. Pizza\n2. Puffs\n3. Cool Drinks \n4. Generate Bill\n5. Exit\n");
    while(1){
         printf("Enter Your Choice : ");
         scanf("%d",&choice);
         switch(choice){
            case 1: 
                    printf("Enter the Number of Pizza : ");
                    scanf("%d",&nump);
                    sum+=100*nump;
                    break;
            case 2:
                    printf("Enter the Number of Puffs : ");
                    scanf("%d",&numpu);
                    sum+=20*numpu;
                    break;
            case 3:
                    printf("Enter the Number of Cool Drinks : ");
                    scanf("%d",&numcd);
                    sum+=10*numcd;
                    break;
            case 4:
                    printf("\nBill\n");
                    printf("Pizza : %d\nPuffs : %d\nCool Drinks : %d\nTotal : %d\n",nump,numpu,numcd,sum);
                    break;
            case 5:
                    exit(0);

         }
    }
}