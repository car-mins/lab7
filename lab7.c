/* Lecture 7(실습)
#include <stdio.h>
int main(void)
{
	printf("Hello World!");

	return 0;
}
*/

/* ex #1
#include <stdio.h>
int main(void)
{
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}
*/

/* ex #2
#include <stdio.h>
#define SIZE 26

int main(void)
{
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);
	printf("\n");

	return 0;
}
*/

/* ex #3
#include <stdio.h>
#define STUDENTS 5

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, averager;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;

	printf("성적 평균 = %d\n", average);

	return 0;
}
*/

/* ex 배열 초기화 에제
#include <stdio.h>

int main(void)
{
	int scores[5] = { 31, 63, 62, 87, 14 };
	int i;

	for (i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}
*/

/* 버틀 솔트
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, k;
	int list[SIZE] = { 16, 7, 9, 1, 3 };

	// 배열의 요소를 정렬!
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {// 크기 순이 아니면
				// 서로 교환!
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}

	// 배열의 요소를 출력!
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}
*/

/* 2차원 배열 초기화 ex #1
#include <stdio.h>

int main(void)
{
	int i, j;
	// 3행과 5열을 가지는 2차원 배열 선언 !!
	int a[3][5] = { {0, 1, 2, 3, 4}, {0,1,2,3,4}, {0,1,2,3,4} };

	// 각 배열 요소의 값을 출력!!
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/