#include<stdio.h>
#define LF 0x0A
int main (void)
{
    char *str = "UTK";
    putchar(65);
    putchar(LF);
    putchar(0x41);
    putchar(LF);
    putchar('A');
    puts("Welcome to RMUTK");
    puts(str);
}