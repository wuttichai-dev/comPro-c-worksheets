#include<stdio.h>
// #include<conio.h>
int main(void)
{
    int money;
    printf("Enter money: ");
    scanf("%d", &money);
    printf("Currency note value 1000 : %d \n", money/1000);
    money = money%1000;
    printf("Currency note value 500 : %d \n", money/500);
    money = money%500;
    printf("Currency note value 100 : %d \n", money/100);
    money = money%100;
    printf("Currency note value 50 : %d \n", money/50);
    money = money%50;
    printf("Currency note value 20 : %d \n", money/20);
    money = money%20;
    printf("Coin value 10 : %d \n", money/10);
    money = money%10;
    printf("Coin value 5 : %d \n", money/5);
    money = money%5;
    printf("Coin value 1 : %d", money);
}