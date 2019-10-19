#include <stdio.h>
int main() {
    int a[10],num,pos,n;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number u want to insert:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    for(int i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
