#include<stdio.h>
// #include<conio.h>
int main(void)
{
    int x;
    printf("Enter Number for Test : ");
    scanf("%d", &x);
    x >= 0 ?printf("%d is Positive",x) : printf ("%d is Negative",x);
}