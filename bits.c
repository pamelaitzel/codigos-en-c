#include <stdio.h>
char cadena [10];
int main(){
printf("un int ocupa %ld bytes", sizeof(int));
printf("un char ocupa %ld bytes", sizeof(char));
printf("un float ocupa %ld bytes", sizeof(float));
printf("un double ocupa %ld bytes", sizeof(double));
printf("cadena ocupa %ld bytes", sizeof(cadena));
    return 0;
}