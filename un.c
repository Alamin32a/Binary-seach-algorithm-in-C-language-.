#include <stdio.h>

int main() {
    int n, i, a, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements in sorted order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d", &a);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] < a) {
            low = mid + 1;
        } else if (array[mid] == a) {
            printf("%d found at position %d.\n", a, mid + 1);
            return 0;
        } else {
            high = mid - 1;
        }
    }

    printf("%d is not present in the array.\n", a);
    return 0;
}
