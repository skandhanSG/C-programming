#include<stdio.h>
char a[100];
int i;
int OperationsBinaryString(char* str)
{
    int ans,b,c,r1,r2,r3,r4;
   char n,o;
    for(i=0; i<=100; i++)
    {
        if(str[i]=='A')
        {
            n=str[i-1];
            o=str[i+1];
            b='o';
            c='n';
            r1=b%10;
            r2=c%10;
            ans=r1&r2;
            i++;
        }
        if(str[i]=='B')
        {
            o=str[i+1];
            b='o';
            r3=b%10;
            ans=ans|r3;
            i++;
        }
        if(str[i]=='C')
        {
            o=str[i+1];
            b='o';
            r4=b%10;
            ans=ans^r4;
        }
    }
    return ans;
}
void main()
{
    printf("enter the input: ");
    gets(a);
    char *str;
    str=a;
    int ans=OperationsBinaryString(a);
    printf("%d",ans);
}
