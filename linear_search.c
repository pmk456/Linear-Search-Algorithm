#include "stdio.h"
int linear_search(int arr[], int size, int n){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 10, 12, 45, 66, 120, 145, 202};
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    int result = linear_search(arr, size, 10);
    if(result != -1){
        printf("Found At index %d", result);
    }
    else{printf("Not Found");}
}
