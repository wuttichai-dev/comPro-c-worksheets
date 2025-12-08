#include<stdio.h>
int main(void)
{
    char *str;
    printf("Input Data \n");
    printf("Enter String from Keyboard ");
    gets(str);
    printf ("\n Output Data\n");
    printf ("Entered String is %s", str);
}