#include <stdio.h>

int arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int array[] = {1,2,3,};
    int size = sizeof(array)/sizeof(array[0]);
    arr(array, size);
    return 0;
}

