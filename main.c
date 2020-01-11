#include <stdio.h>
#include <stdlib.h>
#include 'sum.h'
#include 'subt.h'
#include 'mult.h'
#include 'div.h'

int main()
{
    float a;
    float b;
    printf("Wprowadź 2 liczby:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    sum(a , b);
    subt(a , b);
    mult(a , b);
    div(a , b);
  
}
