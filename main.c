#include <stdio.h>
#include <stdlib.h>


int sum(float a, float b)
{
float c = a + b;
printf("%f+%f=%f", a, b, c);
}

int main()
{
    float a;
    float b;
    printf("Wprowadz 2 liczby\n");
    scanf("%f", &a);
    scanf("%f", &b);
    sum(a , b);
}
