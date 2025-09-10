//According to the gregorian calendar, it was Monday on the date 01/01/01. 
//If any year is input through the keyboard write a program to 
//find out what is the day on 1st January of this year
#include <stdio.h>
int main()
{
    int year, days=0, day;
    printf("enter year: ");
    scanf("%d", &year);
    for(int i=1; i<year; i++)
    {
        if (i%400==0 || i%4==0 && i%100!=0)
            days+=366;
        else
            days+=365;
    }
    day= (days+1)%7;
    printf("1st january %d is a ", year);
    switch(day){
        case 0: printf("sunday\n");
        break;
        case 1: printf("monday\n");
        break;
        case 2: printf("tuesday\n");
        break;
        case 3: printf("wednesday\n");
        break;
        case 4: printf("thursday\n");
        break;
        case 5: printf("friday\n");
        break;
        case 6: printf("saturday\n");
        break;
    }
    return 0;
}