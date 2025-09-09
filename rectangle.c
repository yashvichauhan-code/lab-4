//WAP using ternary operator, the user should input the length and breadth of a rectangle, 
//one has to find out which rectangle has the highest perimeter. 
//The minimum number of rectangles should be three.

#include <stdio.h>
int main()
{
    int l1, b1, l2, b2, l3, b3, p1, p2, p3;
    printf("enter length and breadth of first rectangle (length, breadth): ");
    scanf("%d %d", &l1, &b1);
    printf("enter length and breadth of second rectangle (length, breadth): ");
    scanf("%d %d", &l2, &b2);
    printf("enter length and breadth of third rectangle (length, breadth): ");
    scanf("%d %d", &l3, &b3);
    p1 = 2*(l1+b1);
    p2 = 2*(l2+b2);
    p3 = 2*(l3+b3);
    if (p1>p2 && p1>p3)
    {
        printf("first rectangle has the highest perimeter");
    }
    else if (p2>p1 && p2>p3)
    {
        printf("second rectangle has the highest perimeter");
    }
    else
    {
        printf("third rectangle has the highest perimeter");
    }
    return 0;
}
