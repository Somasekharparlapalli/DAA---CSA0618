#include <stdio.h>
#include <stdlib.h>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void findPairsWithEqualDigitSum(int arr[], int n) {
    int found = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == digitSum(arr[i]) + digitSum(arr[j])) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found with equal sum of digits and pair sum.\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    findPairsWithEqualDigitSum(arr, n);

    return 0;
}