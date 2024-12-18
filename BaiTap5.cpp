#include <stdio.h>

int main() {
    int arr[]={1,2,3,5,8}; 
    int max=arr[0]; 

    printf("So lon nhat trong mang la: ");
    for (int i = 0; i < 5; i++) {
       if(arr[i]>max) {
		max=arr[i];
}
    }	
    printf("%d",max);

    return 0;
}

