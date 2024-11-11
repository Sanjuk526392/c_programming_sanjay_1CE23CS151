#include <stdio.h>

int main() {

char str[] = "Hello, world!";

int i = 0;

while (str[i] != '\0') { 
    
if (str[i] >= 'a' && str[i] <= 'z') {//alpha 
str[i] = str[i] - 'a' + 'A';


}
i++;
}

printf("Uppercase string: %s\n", str);
return 0;


}
