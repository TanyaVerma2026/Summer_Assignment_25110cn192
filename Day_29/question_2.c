//wap  to Create menu-driven array os.

#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("enetr no. element:  ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("1. display erray\n");
        printf("2. sum of elements\n");
        printf("3. find maximum element\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("array element ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i< n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;
            case 3: {
                int max = arr[0];
                for(i = 1; i <n; i++) {
                    if(arr[i] > max)
                        max= arr[i];
                }
                printf("maximum Element = %d\n", max);
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");   }

    } while(choice != 4);
    return 0;
}