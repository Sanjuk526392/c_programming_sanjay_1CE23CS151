#include<stdio.h>
int main (){
    int a=10;
    int *ptr;
    char b='s';
    char* ptr1=&b;
    ptr=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is%p\n ",&a);
    printf("The ptr is %p\n",ptr);
    printf("size of ptr is %d\n",sizeof(ptr));
     printf("size of ptr is %d\n",sizeof(ptr1));
    return 0; 
}