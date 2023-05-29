#include <stdio.h>

int main()
{
	// lw = lastwinner
	int player_A[10], player_B[10], bvictory = 0, lw =0, avictory =0;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &player_A[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &player_B[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (player_A[i] > player_B[i])
		{
			avictory = avictory + 3;
			lw = 1;
		}
		else if (player_A[i] < player_B[i])
		{
			bvictory = bvictory + 3;
			lw = 2;
		}
		else
		{
			avictory += 1;
			bvictory += 1;
		}
	}

	printf("%d %d \n", avictory, bvictory);

	if (avictory == bvictory)
	{
		if (lw == 0) printf("D\n");
		else if (lw == 1) printf("A\n");
		else printf("B\n");
	}
	else if (avictory > bvictory) printf("A\n");
	else printf("B\n");


	return 0;
}