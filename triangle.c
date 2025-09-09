//check validity of a triangle. if validity is established, check for type of triangle, take sides of tri input from the user
#include<stdio.h>
int main()
{ 
    int side1,side2,side3,output;
    printf("enter side a of triangle:");
    scanf("%d",&side1);
    printf("enter side b of triangle:");
    scanf("%d",&side2);
    printf("enter side c of triangle:");
    scanf("%d",&side3);
    if (side1+side2>side3 && side2+side3>side1 && side1+side3>side2 && side1>0 && side2>0 && side3>0)
    {
        printf("triangle is valid\n");
        output=1;
    }
    else
    {
        printf("triangle is invalid\n");
        output=0;
    }
    if (side1==side2 && side2==side3 && output==1)
    {
        printf("it is an equilateral triangle\n");
    }

    else if (side1==side2 || side2==side3 || side1==side3 && output==1)
    {
        printf("it is an isoceles triangle\n");
    }
    if (side1*side1 + side2*side2==side3*side3 || side2*side2 + side3*side3==side1*side1 || side1*side1 + side3*side3== side2*side2 && output==1)
    {
        printf("it is a right angled triangle\n");
    }
    else if (side1!=side2 && side2!=side3 && side1!=side3 && output==1)
    {
        printf("it is a scalene triangle\n");
    }
    return 0;
}