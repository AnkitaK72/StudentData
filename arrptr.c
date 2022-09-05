#include<stdio.h>
void main()
{
    int arr[]={23,25,45,76,81,100};
    int* arrptr=arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);


    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", *(arr + 1));
    printf("The value at address of third element of the array is %d \n", *(&arr[2]));
    printf("The value at address of third element of the array is %d \n", *(arr + 2));
}
