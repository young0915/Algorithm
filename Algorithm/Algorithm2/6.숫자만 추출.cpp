#include <iostream>
#include <stdio.h>

using namespace std;
// g0en2Ts8eSoft
int main()
{
	char Arr[100];
	int result = 0, cnt =0;

	cin >> Arr;

	for (int i = 0; Arr[i] != '\0'; i++)
	{
		// 아스키코드
		if (Arr[i] >= 48 && Arr[i] <= 57)
		{
			result = result * 10 + (Arr[i] - 48);
		}
	}

	// 약수
	for (int i = 1; i <= result; i++)
	{
		if (result % i == 0)
			cnt++;
	}

	cout << result << "\n" << cnt;

	return 0;
}