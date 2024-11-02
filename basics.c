//static mem allocation eg
// #include <stdio.h>

// int main() {
//     // Static memory allocation for an array
//     int arr[5] = {1, 2, 3, 4, 5};  // Array of fixed size 5

//     // Accessing elements of the array
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

//DYNAMIC ALLOC EXAMPLE
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamic memory allocation for an array
//     int *arr;
//     int n = 5;

//     // Allocating memory for n integers
//     arr = (int *)malloc(n * sizeof(int));

//     // Check if the memory has been successfully allocated
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Storing values in the allocated memory
//     for(int i = 0; i < n; i++) {
//         arr[i] = i + 1;
//     }

//     // Accessing elements of the dynamically allocated array
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     // Freeing the dynamically allocated memory
//     free(arr);

//     return 0;
// }

//DYNAMIC MEM ALLOC FUNCS EG
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Using malloc to allocate memory for 2 integers
//     int *arr = (int *)malloc(2 * sizeof(int));
//     arr[0] = 1;  // First value
//     arr[1] = 2;  // Second value
//     printf("Using malloc: %d %d\n", arr[0], arr[1]);

//     // Using calloc to allocate memory for 3 integers, initialized to 0
//     int *new_arr = (int *)calloc(3, sizeof(int));
//     printf("Using calloc: %d %d %d\n", new_arr[0], new_arr[1], new_arr[2]);

//     // Using realloc to resize memory for 4 integers
//     new_arr = (int *)realloc(new_arr, 4 * sizeof(int));
//     new_arr[3] = 3;  // New value
//     printf("After realloc: %d %d %d %d\n", new_arr[0], new_arr[1], new_arr[2], new_arr[3]);

//     // Freeing the allocated memory
//     free(arr);
//     free(new_arr);

//     return 0;
// }

// basic array operations
//#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array initialization
    int i;

    // Traversal: Printing all elements
    printf("Array elements: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion: Insert 60 at the 3rd position (index 2)
    arr[2] = 60;
    printf("After insertion: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion: Remove element at the 4th position (index 3)
    arr[3] = 0;  // Simplified deletion (setting to 0)
    printf("After deletion: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Searching: Find if 30 exists in the array
    int found = 0;
    for(i = 0; i < 5; i++) {
        if(arr[i] == 30) {
            printf("Element 30 found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element 30 not found\n");
    }

    // Updating: Change the 2nd element to 100 (index 1)
    arr[1] = 100;
    printf("After updating: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

