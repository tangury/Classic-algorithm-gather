/***************************************************************************************************
 *其实堆积在调整过程中，就是一个选择的行为，每次将最小值选至树根，而选择的路径并不是所有的元素，而是
 *由树根至树叶的路径，因而可以加快选择的过程，所有Ｈeap排序法才会被称为改良的选择排序法。
 * **************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define SWAP(x,y){int t; t = x; x = y; y = t;}


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


void quicksort(int number[], int left, int right){
	int i, j, s,  length;

	length=sizeof(number)/sizeof(number[0]);


	if(left < right){
		s = number[left];
		i = left;
		j = right + 1;


		while(1){
			//向右找
			while(i +1 < length && number[++i] < s);
			//向左找
			while(j -1 > -1 && number[--j] > s);
			if(i >= j)
				break;
			SWAP(number[i], number[j]);
		}
		number[left] = number[j];
		number[j] = s;

		quicksort(number, left, j - 1);   /*对左边进行递归*/
//		quicksort(number, j + 1, right);  /*对右边进行递归*/

//	}
//}

