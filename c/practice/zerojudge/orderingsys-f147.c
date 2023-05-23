#include <stdio.h>

int total = 0;
int set(){
    int order = 0;
    scanf("%d", &order);
    switch(order){
        case 1:
            printf("Medium Wac 4\n");
            total+=4;
            break;
        case 2:
            printf("WChicken Nugget 8\n");
            total+=8;
            break;
        case 3:
            printf("Geez Burger 7\n");
            total+=7;
            break;
        case 4:
            printf("ButtMilk Crispy Chicken 6\n");
            total+=6;
            break;
        case 5:
            printf("Plastic Toy\n");
            total+=3;
            break;
    }
}
void single(){
    int order = 0;
    scanf("%d", &order);
    switch(order){
        case 1:
            printf("German Fries 2\n");
            total+=2;
            break;
        case 2:
            printf("Durian Slices 3\n");
            total+=3;
            break;
        case 3:
            printf("WcFurry 5\n");
            total+=5;
            break;
        case 4:
            printf("Chocolate Sunday 7\n");
            total+=7;
            break;
        default: break;
    }
}
int main(){
    int inp = -1;
    do{scanf("%d", &inp);
        switch(inp){
            case 1:
                set();
                break;
            case 2:
                single();
                break;
            default: break;
        }
    }while(inp != 0);
    printf("Total: %d",total);
    return 0;
}