#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, A, CI,SI;
    printf("Enter Principal amount: ");
    scanf("%f", &P);
    printf("Enter Time (in years): ");
    scanf("%f", &T);
    printf("Enter Rate of interest: ");
    scanf("%f", &R);
     SI = (P * R * T) / 100;

    printf("Simple Interest = %f\n", SI);
    A = P * pow((1 + R / 100), T);   
    CI = A - P;                      

    printf("Compound Interest = %f\n", CI);
    printf("Total Amount = %f\n", A);

    return 0;
}
