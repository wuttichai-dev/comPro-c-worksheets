#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter character a-z");
    ch = getche();
    ch >= 97 && ch<=122 ? printf ("\nOutput After Convert is %c", ch-32):
    printf("\nOutput After Convert is %c ", ch) ;
    getch();
}