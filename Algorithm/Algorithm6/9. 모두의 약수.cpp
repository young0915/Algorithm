#include <stdio.h>
#include <iostream>

using namespace std;
int cnt[50001];
// 8
int main()
{
	int inputNumber = 0;

	cin >> inputNumber;

	for (int i = 1; i <= inputNumber; i++)
	{
		for (int j = i; j <= inputNumber; j = j + i)
		{
			cnt[j]++;
		}
	}

	for (int i = 1; i <= inputNumber; i++)
	{
		cout << cnt[i];
	}


	return 0;
}