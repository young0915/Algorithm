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

	// �Է¹��� ������ �޸� ũ�⸦ ����������Ѵٴ�..
	scanf_s("%s", &CheckNumber, 101);

	for (int i = 0; CheckNumber[i] != '\0'; i++)
	{
		// �ƽ�Ű�ڵ�
		digit = CheckNumber[i]- 48;
		inputNumber[digit]++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (inputNumber[i] > max)
		{
			max = inputNumber[i];
			// �ڸ����� ����.
			result = i;
		}
	}

	printf("%d\n", result);

	return 0;
}