#include <stdio.h>
#include <stdlib.h>
#include <cmath>  

int main(void)
{
    int num1 = 12400;
    double num2 = 5.234;

    printf("%d is an integer\n", std::pow(num1, 2));     
    printf("%f is a double\n", std::pow(num2, 2));      

    system("pause");
    return 0;
}