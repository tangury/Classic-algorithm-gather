/*****************************************************************************************************
 *合并排序法基本是将两笔已排序的资料合并并进行排序，如果所读入的资料尚未排序，可以先利用其它的排序方式
 *来处理这两笔资料，然后再将排序好的这两笔资料合并。**************************************************
 * ****************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX1 10
#define MAX2 10
#define SWAP(x,y){int t; t = x; x = y; y = t;}

int partition(int[], int, int);
void quicksort(int[], int, int);
void mergesort(int[], int, int[], int, int[]);


int main(void){
	int number1[MAX1] = {0};
	int number2[MAX1] = {0};
	int number3[MAX1 + MAX2] = {0};
	int i;

	srand(time(NULL));
	printf("排序前: ");
	printf("\n number1[]: ");
	for(i = 0; i < MAX1; i++){
		number1[i] = rand() % 100;
		printf("%d", number1[i]);

	}
	printf("\n number2[]: ");
	for(i = 0; i < MAX2; i++){
		number2[i] = rand() % 100;
		printf("%d", number2[i]);
	}


	//先排序两笔资料
	quicksort(number1, 0, MAX1 - 1);
	quicksort(number2, 0, MAX2 - 1);
	printf("\n排序后: ");
	printf("\nnumber1[]: ");
	for(i = 0; i < MAX1; i++)
		printf("%d", number1[i]);
	printf("\nnumber2[]: ");
	for(i = 0; i < MAX2; i++)
		printf("%d", number2[i]);


	//合并排序
	mergesort(number1, MAX1, number2, MAX2, number3);
	printf("\n合并后: ");
	for(i = 0; i < MAX1 + MAX2; i++)
		printf("%d", number3[i]);
	printf("\n");
	return 0;
}

int partition(int number[], int left, int right){
	int i, j, s;
	s = number[right];
	i = left - 1;


	for(j = left; j < right; j++){
		if(number[j] <= s){
			i++;
			SWAP(number[i], number[j]);
		}
	}
	SWAP(number[i + 1], number[right]);
	return i + 1;
}



void quicksort(int number[], int left, int right){
	int q;
	if(left < right){
		q = partition(number, left, right);
		quicksort(number, left, q - 1);
		quicksort(number, q +1,right);

	}
}


void mergesort(int number1[], int M, int number2[], int N, int number3[]){
	int i = 0, j = 0, k = 0;


	while(i < M && j < N){
		if(number1[i] <= number2[j])
			number3[k++] = number1[i++];
		else
			number3[k++] =  number2[j++];
	}
	while(i < M)
		number3[k++] = number1[i++];
	while(j < N)
		number3[k++] = number2[j++];

}
*/



