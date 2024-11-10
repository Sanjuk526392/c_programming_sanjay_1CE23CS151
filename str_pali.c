#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "rrr";
    int start = 0;
    int end = strlen(str)-1;
    char temp;

    while(start < end){
    temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;

}
printf("reversed string:%s\n",str);
if(start==end){
    printf("it is palindrome\n ");
}
else{printf("it is not a palindrome \n");
}

return 0;
}