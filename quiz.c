#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,charges,total;
    printf("Number of items: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("Charge is %d: ",i);
        scanf("%d",&charges);
        if(charges>200)
        charges=charges-(charges*12/100);
        
        total=total+charges;
        printf("You need to pay:%d\n",charges);
    }

    printf("Total Bill=%d",total);
    return 0;
    getch();


}