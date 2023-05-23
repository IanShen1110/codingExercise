#include <stdio.h>
int main(){
    int total = 0;
    int input = 0;
    int order = 0;
    char *set[6] = {0, "Medium Wac", "WChicken Nugget", "Gezz Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
    char *single[5] = {0, "German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
    int setPrice[6] = {0, 4, 8, 7, 6, 3};
    int singlePrice[5] = {0, 2, 3, 5, 7};
    do{
        scanf("%d", &input);
        switch(input){
            case 1:
                scanf("%d", &order);
                printf("%s %d\n", set[order], setPrice[order]);
                total += setPrice[order];
                break;
            case 2:
                scanf("%d", &order);
                printf("%s %d\n", single[order], singlePrice[order]);
                total += singlePrice[order];
                break;
            default:
                break;
        }
    }while(input != 0);
    printf("Total: %d", total);
    return 0;
}