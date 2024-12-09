#include <stdio.h>
int songuyento(int a){
    if(a<=1){
        return 0;
    }
    int count = 0;
    for(int i = 1; i<=a; i++){
        if (a%i==0) {
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    return 0;
}
int main(){
    int n1, n2;
    printf("nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("nhap so thu hai: ");
    scanf("%d", &n2);
    if(songuyento(n1) == 1){
        printf("%d la so nguyen to\n", n1);
    } else{
        printf("%d khong phai so nguyen to\n", n1);
    }
        if(songuyento(n2) == 1){
        printf("%d la so nguyen to\n", n2);
    } else{
        printf("%d khong phai so nguyen to\n", n2);
    }
    return 0;
}

