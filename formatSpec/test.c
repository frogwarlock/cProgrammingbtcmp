#include <stdio.h>

int main(){

    float a =  3.14159;

    float b = 0.33333;

    float temp;

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %f\n", a);
    printf("b = %f\n", b);

    return 0;
}
