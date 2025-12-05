#include<stdio.h>

int main()
{
    float a, b;
    a = 15.7;
    b = 5.1;
    if (b <= 20){
        if(b >= 0.0)
            a = 6 * b;
            printf("%f\n", a);
    }  
    else{
        a = 3 * b;
        printf("%f\n", a);
    }
}