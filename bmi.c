//bmi calculator
#include <stdio.h>
int main() 
{
    float weight, height, bmi;
    int bmi_category;

    printf("enter weight in kg: ");
    scanf("%f", &weight);
    printf("enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("your BMI is: %f\n", bmi);

    if (bmi < 15) 
    {
        bmi_category = 1; //starvation
    } 
    else if (bmi > 15.1 && bmi < 17.5) 
    {
        bmi_category = 2; //anorexic
    } else if (bmi > 17.6 && bmi < 18.5) 
    {
        bmi_category = 3; //underweight
    } 
    else if (bmi > 18.6 && bmi < 24.9) 
    {
        bmi_category = 4; //ideal
    } else if (bmi > 25 && bmi < 25.9) 
    {
        bmi_category = 5; //overweight
    } 
    else if (bmi > 30 && bmi < 39.9)
    {
        bmi_category = 6; //obese
    } 
    else 
    {
        bmi_category = 7; //morbidity obese
    }
    switch (bmi_category)
    {
        case 1:
            printf("starvation\n");
            break;
        case 2:
            printf("anorexic\n");
            break;
        case 3:
            printf("underweight\n");
            break;
        case 4:
            printf("ideal\n");
            break;
        case 5:
            printf("overweight\n");
            break;
        case 6:
            printf("obese\n");
            break;
        case 7:
            printf("morbidity obese\n");
            break;
        default:
            printf("invalid category\n");
            break;
    }
    return 0;
}