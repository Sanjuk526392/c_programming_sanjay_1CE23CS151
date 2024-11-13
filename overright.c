#include <stdio.h>
int main() {
FILE *file= fopen("hello.txt", "w"); 
if (file == NULL){
perror("Error opening file");
return 1;
}
fprintf(file, "This is the first line.\n");
fprintf(file, "Writing to file will overwrite its contents.\n");
fclose(file);
printf("File written successfully in write mode.\n");
return 0;
}