#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int inputPlayer, count =0;

	scanf_s("%d", &inputPlayer);
	vector<int> A(inputPlayer + 1);

	for (int i = 1; i <= inputPlayer; i++)
	{
		scanf_s("%d", &A[i]);
	}
	for (int i = 2; i <= inputPlayer; i++)
	{
		count = 0; 
		for (int j = i - 1; j >= 1; j--)
		{
			if (A[j] >= A[i])
				count++;
		}
			printf("%d", count + 1);
	}

	return 0;
}