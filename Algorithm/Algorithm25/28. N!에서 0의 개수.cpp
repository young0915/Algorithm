#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int inputNumber, i, j, count1 =0, count2=0, temp;
	scanf_s("%d", &inputNumber);

	for (i = 2; i <= inputNumber; i++)
	{
		temp = i; 
		j = 2;
		while (1)
		{
			if (temp % j == 0)
			{
				if (j == 2) count1++;
				else if (j == 5) count2++;
				temp = temp / j;
			}
			else
				j++;
			if (temp == 1) break;
		}
	}


	if (count1 < count2)
		printf("%d\n", count1);
	else
		printf("%d\n", count2);
	return 0;
}