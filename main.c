#include <stdio.h>
#include <stdlib.h>

/*
Hello Programm
*/

int main()
{
    char Name[20];
    int Age; 
    char Gender[20];
    printf("Whats your name? [max 20 chars] >>> ");
    fgets(Name, 20, stdin);
    printf("Your gender [Male or Female] >>> ");
    fgets(Gender, 20, stdin);
    printf("what is your age >>> ");
    scanf("%d", &Age);
    printf("\n");
    printf("Hello %s", Name);
    printf("you are a %d year old %s", Age, Gender);
    return 0;
}