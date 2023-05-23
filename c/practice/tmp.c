#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,j,total=0;
    const char *food[5];
    food[1] = "German Fries";
    food[2] = "Durian Slices";
    food[3] = "WcFurry";
    food[4] = "Chocolate Sunday";
    
    const char *set[6];
    set[1] = "Medium Wac";
    set[2] = "WChicken Nugget";
    set[3] = "Geez Burger";
    set[4] = "ButtMilk Crispy Chicken";
    set[5] = "Plastic Toy";    
    const int money[6]={-1,4,8,7,6,3};
    const int dollar[5]={-1,2,3,5,7};    
    scanf("%d",&n);
    while(n!=0)
    {
    
        scanf("%d",&j);    
        if(n==1)
        {
            printf("%s %d\n",set[j],money[j]);
            total=total+money[j];
        }
        if(n==2)
        {
            printf("%s %d\n",food[j],dollar[j]);
            total=total+dollar[j];
        }
        scanf("%d",&n);
    }
    printf("Total: %d",total);

}