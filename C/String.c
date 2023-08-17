#include<stdio.h>
void main(){
    char str1[20],str2[20];
    printf("Enter the string 1 : ");
    scanf("%s",str1);
    printf("Enter the string 2 : ");
    scanf("%[^\n]%*c",str2);
    printf("String 1 : %s\n",str1);
    printf("String 2 : %s\n",str2);
}