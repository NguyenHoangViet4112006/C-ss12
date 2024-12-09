#include<stdio.h>
void max(int arr[], int size){
	int max =arr[0];
	for(int i = 0; i<size; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("%d", max);
}
int main(){
	int arr[]= {36,34,23,5,4,4,};
	int size = sizeof(arr)/sizeof(arr[0]);
	max(arr, size); 
	return 0;
}
