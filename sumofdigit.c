#include<stdio.h>
int main(){
    int n,rev,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        rev=n%10;
        sum=sum+rev;
        n=n/10;
    }
    printf("sum of digit:%d\n",sum);
    return 0;
}