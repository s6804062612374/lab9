#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	int A[3] = {1,2,3},B[3] = {4,5,6},size=3;
	int i,j;
	printf("Before swapArray function: A[]=");
	for(i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	printf("Before swapArray function: B[]=");
	for(i=0;i<size;i++){
		printf("%d ",B[i]);
	}
	printf("\n");
	swapArray(A,B,size);
	printf("After swapArray function: A[]=");
	for(i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	printf("After swapArray function: B[]=");
	for(i=0;i<size;i++){
		printf("%d ",B[i]);
	}
}

void swapValue(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void swapArray(int a[], int b[], int size){
	int i,temp;
	for(i=0;i<size;i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
