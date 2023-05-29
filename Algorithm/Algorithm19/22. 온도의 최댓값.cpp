#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int n, k, i, sum = 0, max;

	scanf_s("%d %d", &n, &k);

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}

	max = sum;

	for (int i = k; i < n; i++)
	{
		sum = sum + (a[i] - a[i - k]);
		if (sum > max) max = sum;
	}

	printf("%d\n", max);

	return 0;
}