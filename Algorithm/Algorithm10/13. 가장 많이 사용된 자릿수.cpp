#include <iostream>
#include <stdio.h>

using namespace std;
int inputNumber[10];
// 1230565625
int main()
{
	int digit, result;
	int max = -2147000000;

	char CheckNumber[101];

	// 입력받을 변수의 메모리 크기를 지정해줘야한다니..
	scanf_s("%s", &CheckNumber, 101);

	for (int i = 0; CheckNumber[i] != '\0'; i++)
	{
		// 아스키코드
		digit = CheckNumber[i]- 48;
		inputNumber[digit]++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (inputNumber[i] > max)
		{
			max = inputNumber[i];
			// 자릿수의 숫자.
			result = i;
		}
	}

	printf("%d\n", result);

	return 0;
}