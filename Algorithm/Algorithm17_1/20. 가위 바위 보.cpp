#include <stdio.h>

int main()
{
	// 가위 바위 보
	int playCount, player_A[101], player_B[101];

	scanf_s("%d", &playCount);
	for (int i = 1; i <= playCount; i++)
	{
		scanf_s("%d", &player_A[i]);
	}

	for (int i = 1; i <= playCount; i++)
	{
		scanf_s("%d", &player_B[i]);
	}

	for (int i = 1; i <= playCount; i++)
	{
		if (player_A[i] == player_B[i])
		{
			printf("D\n");
		}
		else if (player_A[i] == 1 && player_B[i] == 3) printf("A\n");
		else if (player_A[i] == 2 && player_B[i] == 1) printf("A\n");
		else if (player_A[i] == 3 && player_B[i] == 2) printf("A\n");
		else printf("B\n");
	}


	return 0;
}