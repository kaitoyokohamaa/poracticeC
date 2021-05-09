#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	typedef char String[1024];
	int main(void)
	{
		String calendarNum;
		printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください");
		scanf("%s",calendarNum );
		int convertoToNum = atoi(calendarNum)/3;
		printf("選んだ数字は%dと%dと%dですね？",convertoToNum-7,convertoToNum,convertoToNum+7);
		return 0;
	}
