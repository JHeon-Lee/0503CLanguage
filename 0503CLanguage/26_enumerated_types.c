#include <stdio.h>

// 열거형 define을 묶어서 쓴다 보면 됨

void myEnum();

int main()
{
	myEnum();

	return 0;
}

void myEnum()
{
	{
#define RED 0
#define ORG 1
#define YEL 2

		int c = 0;
		printf("값 입력 : ");
		scanf_s("%d", &c);

		if (c == RED)
			printf("red\n");
		if (c == ORG)
			printf("orange\n");
		if (c == YEL)
			printf("yellow\n");
		printf("\n");
	}
	// 위랑 똑같다.
	{
		enum color // c++ 에선 상관없지만 c에선 structure 처럼 typedef 써줘야 편함
		{
			Red = 0, // 값 지정 안해도 맨 처음값이 0으로 잡히고, 1씩 증가
			Orange = 1, // Orange = 10, 으로 잡을 경우 Red는 0, Yellow는 11로 잡힘
			Yellow = 2
		};

		int c = 0;
		printf("값 입력 : ");
		scanf_s("%d", &c);

		if (c == Red)
			printf("red\n");
		if (c == Orange)
			printf("orange\n");
		if (c == Yellow)
			printf("yellow\n");
		printf("\n");

		for (c = Red; c <= Yellow; c++) // 상수로 그대로 사용 가능
		{
			printf("%d", c);
		}

		printf("\n");
	}
}
