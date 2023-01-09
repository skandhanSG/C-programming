#include<stdio.h>
#include<string.h>
#define MAX 100
void main()
{
int i,j,flag=-1,n=0;
char str1[MAX]={0},str2[MAX]={0};
printf("enter the string one: ");
scanf("%s",str1);
printf("enter the string two: ");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++)
{
for(j=0;str2[j]!='\0';j++)
{
if(str1[i]!=str2[j])
{
break;
}
if(str2[i]==str1[j]&&str2[i+1]==str1[j+1]&&str2[i+2]==str1[j+2])
{
    printf("%d\n",j);
    flag=1;
}
}
if(flag==1)
{
    printf("flag %d",flag);
    break;
}}

}

