#include<stdio.h>
void main()
{
    int a,arr[a],arr1[a], i,j,k   ;

    printf("enter the length of the array: ");
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {

            if(arr[i]>arr[i+1])
{
    arr1[i]=arr[i];
          printf("%d\n",arr[i]);
}
 if(arr[i]<arr[i+1])
{
    arr1[i]=arr[i];
          printf("%d",arr[i]);
}
 }

    for(i=0; i<a; i++)
    {
        printf("%d\n",arr1[i]);
    }
}
