#include <iostream>

int main()
{
	int N, SUM = 1;

	int i;

	std::cin >> N;
	std::cout << "1";
	for (i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			SUM += i;

			std::cout << " + " << i;
		}
	}

	std::cout << " = " << SUM;

	return 0;
}
