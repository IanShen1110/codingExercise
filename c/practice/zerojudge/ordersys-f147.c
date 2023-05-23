#include <stdio.h>
int main(){
    int total = 0;
    int input = 0;
    const char *set[5] = {"Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
    const char *single[4] = {"German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
    const int setPrice[5] = {4, 8, 7, 6, 3};
    const int singlePrice[4] = {2, 3, 5, 7};
    do{
        scanf("%d", &input);
        switch(input){
            case 1:
                scanf("%d", &input);
                printf("%s %d\n", set[input-1], setPrice[input-1]);
                total += setPrice[input-1];
                break;
            case 2:
                scanf("%d", &input);
                printf("%s %d\n", single[input-1], singlePrice[input-1]);
                total += singlePrice[input-1];
                break;
            default:
                break;
        }
    }while(input != 0);
    printf("Total: %d", total);
}