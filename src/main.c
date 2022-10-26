#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "espl_lib.h"

int main ()
{

unsigned int Given_Number;
char response;

do 
{
printf("Enter a number: ");
scanf("%d", &Given_Number);
printf("%s\n", num_to_words(Given_Number));

printf("You want to give another Number? (Y/N) :");
scanf(" %c", &response);
}while (response=='Y');

return 0;


}


