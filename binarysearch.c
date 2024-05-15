 #include <stdio.h>
int binary_search(int arr[], int size, int target);
void bubble_sort(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 44, 5, 56, 7, 18, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 56;
    bubble_sort(arr, size);
    int index = binary_search(arr, size, target);

    if (index != -1) {
        printf("Target %d found at index %d.\n", target, index);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
