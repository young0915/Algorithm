#include <iostream>
using namespace std;
int main()
{
	int inputNumber, sum = 0, cnt = 1, digit =9, result =0;

	cin >> inputNumber;

	while (sum+ digit<inputNumber)
	{
		result = result + (cnt * digit);
		sum = sum + digit;
		cnt++;
		digit = digit * 10;
	}

	result = result + ((inputNumber - sum) * cnt);

	cout << result;

	return 0;
}