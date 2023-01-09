#include<stdio.h>
void main(){
    int n,i,j;
    char teacher1[2][20]={"student1","student2"}, teacher2[2][20]={"student3","student4"}, teacher3[2][20]={"student5","student6"}, teacher4[2][20]={"student7","student8"}, teacher5[2][20]={"student9","student10"};
    int student1=1, student2=2, student3=3, student4=4, student5=5, student6=6, student7=7, student8=8,student9=9, student10= 10;
    printf("what you need to find \n 1.fee paid \n2.teacher hours");
    scanf("%d",&n);
    if(n==2)
    printf("each student attend 5 hours of class");
    else
    {
        switch(n){
        case 1: printf("paid");
        case 2: printf("paid");
        case 3: printf("paid");
        case 4: printf("paid");
        case 5: printf("paid");
        case 6: printf("paid");
        case 7: printf("paid");
        case 8: printf("paid");
        case 9: printf("paid");
        case 10: printf("paid");
        }
    }
}