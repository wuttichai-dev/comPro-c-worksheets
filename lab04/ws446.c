#include<stdio.h>

int main(void)
{
    int a= 2000;
    int b= 8;
    printf ("Assume the integer data x is 2000\n");
    printf ("Shifted data 1 bit is : %d\n", a<<1);
    printf ("Shifted data 2 bit is : %d\n", a<<2);
    printf ("Shifted data 3 bit is : %d\n", a<<3);
    printf ("Assume the integer data x is 8\n");
    printf ("Shifted data 1 bit is : %d\n", b>>1);
    printf ("Shifted data 2 bit is : %d\n", b>>2);
    printf ("Shifted data 3 bit is : %d\n", b>>3);
}