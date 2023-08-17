#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char first[10],second[10],third[10];
    printf("Enter the First Word : ");
    scanf("%s",first);
    printf("Enter the Second Word : ");
    scanf("%s",second);
    printf("Enter the Third Word : "); 
    scanf("%s",third);
    for(int i=0;i<strlen(first);i++)
        if(first[i]=='a'||first[i]=='e'||first[i]=='i'||first[i]=='o'||first[i]=='u'||first[i]=='A'||first[i]=='E'||first[i]=='I'||first[i]=='O'||first[i]=='U')
            first[i]='%';
    for(int i=0;i<strlen(second);i++)
        if(second[i]!='a'&&second[i]!='e'&&second[i]!='i'&&second[i]!='o'&&second[i]!='u'&&second[i]!='A'&&second[i]!='E'&&second[i]!='I'&&second[i]!='O'&&second[i]!='U')
            second[i]='#';
    for(int i=0;i<strlen(third);i++)
        third[i]=toupper(third[i]);
    char concat[30];
    strcpy(concat,first);
    strcat(concat,second);
    strcat(concat,third);
    printf("The Concatenated String is : %s",concat);
}