#include<stdio.h>

int main () {
    int arr[100], first, middle, last, search, i, n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to count:\n");
    scanf("%d", &search);


    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (arr[middle] < search) {
            first = middle + 1;
        } else if (arr[middle] == search) {

            count = 1;

            int left = middle - 1;
            while (left >= 0 && arr[left] == search) {
                count++;
                left--;
            }

            int right = middle + 1;
            while (right < n && arr[right] == search) {
                count++;
                right++;
            }
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if (count > 0) {
        printf("%d is found %d times\n", search, count);
    } else {
        printf("%d is not found in the array\n", search);
    }

    return 0;
}
