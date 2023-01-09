#include<stdio.h>
#define MAX 100
int main()
{
char a[MAX], b[MAX],c[MAX];
int i=0,j=0;
printf("enter the set one : ");
scanf("%s",a);
printf("enter the set two : ");
scanf("%s",b);


    while (a[i] != '\0') {
        c[j] = a[i];
        i++;
        j++;
    }

    i = 0;
    while (b[i] != '\0') {
        c[j] = b[i];
        i++;
        j++;
    }

c[j]='\0';
printf("%s",c);
return 0;
}

