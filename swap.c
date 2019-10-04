#include<stdio.h>
int main()
{
int temp=0,bowlA,bowlB;
printf("enter the amount of cake(kg) in a and b:");
scanf("%d %d",&bowlA,&bowlB);
printf("bowlA=%d\nbowlB=%d",bowlA,bowlB);
temp=bowlA;
bowlA=bowlB;
bowlB=temp;
printf("\nafter\nbowlA=%d\nbowlB=%d",bowlA,bowlB);
return 0;
}

