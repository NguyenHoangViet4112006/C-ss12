#include <stdio.h>

int giaithua(int n){
    if (n == 0) {
        return 1;
    }else {
        return n * giaithua(n - 1);
    }
}

int main(){
    int number;
    printf("nhap mot so nguyen: ");
    scanf("%d", &number);
    printf("giai thua cua %d la %d", number, giaithua(number));
    return 0;
}

