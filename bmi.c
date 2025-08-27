//bmi calculator
#include <stdio.h>
int main() 
{
    float weight, height, bmi;

    printf("enter weight in kg: ");
    scanf("%f", &weight);
    printf("enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("your BMI is: %f\n", bmi);

    if (bmi < 15) 
    {
        printf("starvation\n");
    } 
    else if (bmi > 15.1 && bmi < 17.5) 
    {
        printf("anorexic\n");
    } 
    else if (bmi > 17.6 && bmi < 18.5) 
    {
        printf("underweight\n");
    } 
    else if (bmi > 18.6 && bmi < 24.9) 
    {
        printf("ideal\n");
    }
    else if (bmi > 25 && bmi < 25.9)
    {
        printf("overweight\n");
    } 
    else if (bmi > 30 && bmi < 39.9)
    {
        printf("obese\n");
    }
    else 
    {
        printf("morbidity obese\n");
    }
    return 0;
}