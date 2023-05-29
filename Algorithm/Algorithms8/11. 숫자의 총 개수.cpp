#include <iostream>
using namespace std;
int main()
{
	int inputNumber, cnt=0, tmp;
	cin >> inputNumber;
	for (int i = 1; i <= inputNumber; i++)
	{
		tmp = i;
		while (tmp>0)
		{
			tmp = tmp / 10;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}