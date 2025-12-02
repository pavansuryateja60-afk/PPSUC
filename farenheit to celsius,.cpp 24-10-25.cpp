#include <stdio.h>

int main()
{
    float f,c;
    printf("Enter Fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celsius is:%f",c);
    return 0;
}

