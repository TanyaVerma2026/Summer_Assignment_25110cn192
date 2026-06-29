//wap  to Create inventory management system. 

#include <stdio.h>
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Item item[100];
    int n, i;
    printf("enter no. of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nenter details of Item %d\n", i + 1);
        printf("Item id: ");
        scanf("%d" , &item[i].id);
        printf("Item name: ");
        scanf("%s", item[i].name);
        printf("Quantity: ");
        scanf("%d" , &item[i].quantity);
        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n.. inventory details ..\n");
    printf("ID\tname\tQty\tPrice\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n",
               item[i].id,
               item[i].name,
               item[i].quantity,
               item[i].price);
    }
    return 0;
}
