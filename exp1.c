//check validity of a triangle. if validity is established, check for type of triangle, 
//take sides of tri input from the user
#include<stdio.h>
int main()
{ 
    float side1,side2,side3;
    printf("enter side a of triangle:");
    scanf("%f",side1);
    printf("enter side b of triangle:");
    scanf("%f",side2);
    printf("enter side c of triangle:");
    scanf("%f",side3);
    if ((side1==side2) && (side2==side3))
    {
        printf("it is an equilateral triangle");
    }
    
    else if ((side1==side2) || (side2==side3))
    {
        printf("it is an isoceles triangle");
    }
    else if ((side1!=side2) && (side2!=side3) && (side1!=side3))
    {
        printf("it is a scalene triangle");
    }
}
    
    
