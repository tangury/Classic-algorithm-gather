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


void createheap(int[]);
void heapsort(int[]);


int main(void){
	int number[MAX + 1] = {-1};
	int i, num;

	srand(time(NULL));

	printf("排序前: ");
	for(i =1; i <= MAX; i++){
		number[i] = rand() % 100;
		printf("%d", number[i]);
	}

	printf("\n建立堆积树: ");
	createheap(number);
	for(i =1; i <= MAX; i++)
		printf("%d", number[i]);
	printf("\n");

	heapsort(number);

	printf("\n");

	return 0;
}

void createheap(int number[]){
	int i, s, p;
	int heap[MAX + 1] = {-1};

	for(i = 1; i <= MAX; i++){
		heap[i] = number[i];
		s = i;
		p = i / 2;
		while(s >= 2 && heap[p] > heap[s]){
			SWAP(heap[p], heap[s]);
			s = p;
			p = s / 2;
		}
	}
	for(i = 1; i <=MAX; i++)
		number[i] = heap[i];
}


void heapsort(int number[]){
	int i, m, p, s;

	m = MAX;
	while(m > 1){
		SWAP(number[1], number[m]);
		m--;


		p = 1;
		s = 2 * p;


		while(s <= m){
			if(s < m && number[s+1] < number[s])
				s++;
			if(number[p] <= number[s])
				break;
			SWAP(number[p], number[s]);
			p = s;
			s = 2 * p;
		}
		printf("\n排序中: ");
		for(i = MAX; i >0; i--)
			printf("%d", number[i]);
	}
}
*/
