#include <stdio.h>

int main() {

char str[] = "HELLO, WORLD!";

int i = 0;

while (str[i] != '\0') { 
    
if (str[i] >= 'A' && str[i] <= 'Z') {
str[i] = str[i] - 'A' + 'a';


}
i++;
}

printf("Lowercase string: %s\n", str);
return 0;


}
