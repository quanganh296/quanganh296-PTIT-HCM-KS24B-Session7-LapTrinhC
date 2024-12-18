#include <stdio.h>

int main() {
    int arr[]={1,2,3,5,8}; 
    int flags = 0; 

    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
         flags = 1;
            printf("%d ", arr[i]);
            
        }
    }

    if (flags==0) {
        printf("Mang khong chua so chan.");
    }
    printf("\n");

    return 0;
}

