#include<stdio.h>
#include<string.h>
void main()
{
    int num=1,c=0,i,j;

    printf("enter the length of the array: ");
    scanf("%d",&num);
    char a[num];
    printf("enter the array: ");
            scanf("%s",a);
    for(i=0;i<num;i++)
    {

        printf("%c",a[i]);
    }

    for(i=1; i<num; i=i+2)
    {
            c=a[i]-48;
            printf("%d\n",c);
            for(j=0; j<c; j++)
{
                printf("%c",a[i-1]);
            }}
        }
