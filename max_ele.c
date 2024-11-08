#include<stdio.h>
int main()
{
    int n;
    printf("enter the n value");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the elements");
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf("the max ele is %d\n",max);
return 0;
}