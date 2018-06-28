/***************************************************************************************************
 ******假设有一条绳，上面有红、白、蓝三种颜色的旗子，起初绳子上的旗子颜色并没有顺序，您希望**********
 * *****将之分类，并排列为蓝，白，红的顺序，要如何移动次数才会最少，注意您只能在绳子上进行这个动作****
 **************** ****************而且一次只能调换两个旗子 **************** **************** ***********
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLUE 'b'
#define WHITE 'w'
#define RED 'r'

#define SWAP(x, y){char temp;\
	temp = color[x];\
	color[x] = color[y];\
	color[y] = temp;}

int main()
{
	char color[] = {'r', 'w', 'b', 'w', 'w', 'b', 'r', 'b', 'w', 'r', '\0'};

	int wFlag = 0;
	int bFlag = 0;
	int rFlag = strlen(color) - 1;
	int i;

	for(i=0; i<strlen(color -1); i++)
		printf("%c", color[i]);
	printf("\n");

	while(wFlag <= rFlag){
		if(color[wFlag] == WHITE)
			wFlag++;
		else if(color[wFlag] == BLUE)
		{
			SWAP(bFlag, wFlag);
			bFlag++;
			wFlag++;
		}
		else{
			while(wFlag < rFlag && color[rFlag] == RED)
				rFlag--;
			SWAP(rFlag, wFlag);
			rFlag--;
		}
	}
	for(i=0; i<strlen(color); i++)
		printf("%c", color[i]);
	printf("\n");
	return 0;

}
*/
