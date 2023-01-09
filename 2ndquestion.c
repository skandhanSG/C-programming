#include<stdio.h>
void main()
{
int a[100]={0},i,j,k,num=0,b;
printf("enter how much you are gonna enter : ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
    printf("enter the set of inputs : ");
scanf("%d",&a[i]);
}
        for (k = 0; k < num; k=k+2)
        {

            for (j = 0; j < num; j=j+2)
            {

                if (a[k] > a[j])
                {

                    b =  a[k];
                    a[k] = a[j];
                    a[j] = b;

                }

            }

        }
        for (k = 1; k < num; k=k+2)
        {

            for (j =  1; j < num; j=j+2)
            {

                if (a[k] < a[j])
                {

                    b =  a[k];
                    a[k] = a[j];
                    a[j] = b;

                }

            }

        }
         for (i = 0; i < num; ++i)
            printf("%d\n", a[i]);

}

