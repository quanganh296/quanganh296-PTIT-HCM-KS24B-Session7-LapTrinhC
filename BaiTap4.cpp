#include <stdio.h>

int main() {
    int n; 
    int arr[n];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
	 {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
	 { 
	 
        printf("%d ",arr[i]);
    }
    printf("\n");
   
    return 0;
}

