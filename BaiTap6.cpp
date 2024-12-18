#include <stdio.h>
#include <math.h>
int main() {
    int arr[]={1,2,3,5,8}; 
 int changes;
    printf("So thay doi: ");
    for (int i = 0; i < 5; i++) {
       if(arr[i]%2==0) {
		changes=arr[i]+3;
}
else {
	changes=arr[i]+2;
}
       printf("%d",arr[i]); }	
    


    return 0;
}

