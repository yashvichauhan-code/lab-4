//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not

#include <stdio.h>
int main()
{
  int x1, y1, x2, y2, x3, y3;
  printf("enter coordinates of first point (x1 y1): ");
  scanf("%d %d", &x1,&x2);
  printf("enter coordinates of second point (x2,y2): ");
  scanf("%d %d", &x2,&y2);
  printf("enter coordinates of third point (x3,y3): ");
  scanf("%d %d", &x3,&y3);
  if (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) == 0)
  {
    printf("points are collinear");
  }
  else
  {
    printf("points are not collinear");
  }
  return 0;
}