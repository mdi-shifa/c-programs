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
