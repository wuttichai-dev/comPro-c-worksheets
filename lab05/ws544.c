#include<stdio.h>
// #include<conio.h>
int main(void)
{
    char ch;
    printf("Input Data\n");
    printf("Enter one character from Keyboard: ");
    ch = getc(stdin);
    printf ("\nOutput Data\n");
    printf ("Entered character is %c ",ch);
}