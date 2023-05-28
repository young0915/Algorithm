#include <iostream>
#include <math.h>
int main()
{

	int min = 2147000000, max = -2147000000;
	int nAge = 0;

	// Current Number of People
	int nCurrentNumberofPeople = 0;

	std::cin >> nCurrentNumberofPeople;


	for (int i = 0; i < nCurrentNumberofPeople; i++)
	{

		std::cin >> nAge;
		if (min > nAge)
		{
			min = nAge;
		}
		if (max < nAge)
		{
			max = nAge;
		}
	}

	std::cout << " 나이 차이는 : " << (max - min);

	return 0;
}