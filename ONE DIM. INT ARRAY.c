// ONE DIMENSION INTEGER ARRAY

/* 1. Write a program, enter n elements into an array, performCO4INTEGER ARRAYlinear search in c program.
#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
} */


/* 2. WAP ENTER N ELEMENTS INTO AN ARRAY. PERFORM BINARY SEARCH.
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;  
        if (arr[mid] == target) {
            return mid;  
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;  
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
} */


/* 3. WAP ENTER N ELEMENTS INTO AN ARRAY,PERFORM REVERSE OPREACTION.
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int temp;
    int left = 0;
    int right = n - 1;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
} */


/* 4. WAP TO DELETE DUPLICATE ELEMENT IN A LIST OF 10 ELEMENT AND DISPLAY IT ON SCREEN.
#include <stdio.h>
int main() {
    int arr[10], i, j, k, n = 10;
    printf("Enter 10 elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
} */


/* 5. WAP TO MERGE TWO SORTED ARRAY AND NO ELEMENT IS REPEATED DURING MURGING.
#include <stdio.h>	
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1 + n2];  
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (k == 0 || merged[k - 1] != arr2[j]) {
                merged[k++] = arr2[j];
            }
            j++;
        }
        else { 
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (k == 0 || merged[k - 1] != arr1[i]) {
            merged[k++] = arr1[i];
        }
        i++;
    }
    while (j < n2) {
        if (k == 0 || merged[k - 1] != arr2[j]) {
            merged[k++] = arr2[j];
        }
        j++;
    }
    printf("Merged array without duplicates: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 3, 6, 7, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeSortedArrays(arr1, n1, arr2, n2);
    return 0;
} */
