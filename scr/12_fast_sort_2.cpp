/***************************************************************************************************
 *以最右边的值s作比较的标准，将整个数列分为三个部分，一个是小于s的部分，一个是大于s的部分，一个是未处理
 *的部分。在排序过程中，i与j都会不断的往右进行比较与交换，最后数列会变为   小于s大于s   s 的排列方式
 *然后将s
 * **************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define SWAP(x,y){int t; t = x; x = y; y = t;}

int partition(int[], int, int);
void quicksort(int[], int, int);

int main(void){
	int number[MAX] = {0};
	int i;

	srand(time(NULL));

	printf("排序前: ");
	for(i = 0; i < MAX; i++){
		number[i] = rand() % 100;
		printf("%d", number[i]);
	}
	quicksort(number, 0, MAX-1);

	printf("\n排序后: ");
	for(i = 0; i < MAX; i++)
		printf("%d", number[i]);
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
	SWAP(number[i+1], number[right]);
	return i + 1;
}

void quicksort(int number[], int left, int right){
	int q;

	if(left < right){
		q = partition(number, left, right);
		quicksort(number, left, q - 1);
		quicksort(number, q + 1, right);

	}
}

*/
