#include <iostream>

int main()
{
	int A, B = 0;
	int Sum = 0;
	std::cin >> A >> B;


	for (int i = A; i <= B; i++)
	{
		Sum += i;
	}

	std::cout << Sum;

	return 0;
}
