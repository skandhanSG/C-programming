#include<stdio.h>
void main()
{
int i,j,a[5],temp=0;

for (i=0;i<=4;i++)
     {
        printf("enter the number: \n");
        scanf("%d",&a[i]);
     }
for (i=0;i<=4;i=i+2)
    {
        for(j=i+1;j<=4;j++)
        {
           if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }}
        printf("ascending order is: ");
        for (i = 0; i <=4;i++)
            printf("%d\n",a[i]);
        }

