#include <stdio.h>
#include <string>
int Domin(int arr[], int len) {
	int i, j, q , maybe ;
	int maybe2 = 0;
	
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				q = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = q;
			}
		}
	} 
	printf("Sorted array:");
	for (i = 0; i < len; i++) {

		printf("%d ", arr[i]);

	}
	maybe = arr[len/2];
	for (i = 0; i < len; i++) {
		if (arr[i] == maybe) {
			maybe2 = maybe2 + arr[i];
			if (maybe2 / maybe > len / 2) {
				return maybe;
			}
		}
	} return -1;
}
int main( ) {
	int arr[] = { 5 , 5 ,5  , 7 ,4 ,0 ,5 ,1 ,4 ,7 , 15 , 85, 12};
	int len;
	len = sizeof(arr) / sizeof(int);
	int n = Domin( arr , len ); 
	printf("\n %d", n );
	
}