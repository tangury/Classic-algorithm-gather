/***************************************************************************************************
 * Shell首先将间隔设定为n/2，然后跳跃进行插入排序，再将间隔n/4，跳跃进行排序动作，在以间隔设定为n/8、n/16,
 * 直到间隔为１之后的最后一次排序终止，由于上一次的排序动作都会将固定间隔内的元素排序好，所以当间隔越来
 * 越小时，某些元素位于正确位置的机率越高，因此最后几次排序动作将可以大幅降低。***********************
 * **************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define SWAP(x,y){int t; t = x; x = y; y = t;}
void shellsort(int[]);

int main(void){
	int number[MAX] = {0};
	int i;

	srand(time(NULL));

	printf("排序前: ");
	for(i = 0; i < MAX; i++){
		number[i] = rand() % 100;
	    printf("%d", number[i]);
	}
	shellsort(number);

	return 0;
}


void shellsort(int number[]){
	int i, j, k, gap, t;

	gap = MAX / 2;
	while(gap > 0){
		for(k = 0; k < gap; k++){
			for(i = k + gap; i < MAX; i += gap){
				for(j = i - gap; j >= k; j -= gap){
					if(number[j] > number[j + gap]){
						SWAP(number[j], number[j + gap]);
					}
					else
						break;
				}
			}
		}


		printf("\ngap = %d: ", gap);
		for(i = 0; i < MAX; i++)
			printf("%d", number[i]);
		printf("\n");


		gap /= 2;
	}
}
*/
