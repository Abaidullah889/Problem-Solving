#include<stdio.h>


int main()
{

    int i=0;
    scanf("%d",&i);

    if(i%2!=0)
    {
        printf("Weird");
    }
    else if(i%2==0 && i>=2 && i<=5)
    {
        printf("Not Weird");
    }
    else if(i%2==0 && i>=6 && i<=20)
    {
        printf("Weird");
    }
    else if(i%2==0 && i>20)
    {
        printf("Not Weird");
    }


    return 0;
}