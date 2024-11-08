#include<stdio.h>
int main()
{
     int n,i;
    printf("enter the n value");
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++){
        printf("enter the elements");
        scanf("%d",&a[i]);
    }
    int s;
    printf("enter the number to be search");
    scanf("%d",&s);
    for(i=0;i<n;i++){
    if(s==a[i]){//3=3
        printf("the no is present");//3
        return 0;
    }  
    }   
        printf("the no is not present");
    return 0;
}