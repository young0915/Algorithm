#include <stdio.h>

int main()
{
	int A[100], B[100], inputStudents; 

	scanf_s("%d", &inputStudents);

	for (int i = 0; i < inputStudents; i++)
	{
		scanf_s("%d", &A[i]);
		B[i] = 1;

	}

	for (int i = 0; i < inputStudents; i++)
	{
		for (int j = 0; j < inputStudents; j++)
		{
			// 등수 비교
			if (A[j] > A[i]) B[i]++;
		}
	}


	for (int i = 0; i < inputStudents; i++)
	{
		printf("%d", B[i]);
	}


	return 0;
}