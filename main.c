//WAP  to check a number is positivr,negitive or zero
#include <stdio.h>

int main()
{
    //declare variables
    int num;
    
    //user input
    printf("enter a interger value:");
    scanf("%d", &num);
    
    if(num==0)
    printf("Its a zero");
    else if(num>0)
    printf("Number %d is a positive Number ",num);
    else
    printf("Number %d is negitive Number", num);
    printf("\nHave a nice day!");
    
}
