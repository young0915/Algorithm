#include <stdio.h>
#include <iostream>

// (()(()))(()
int main()
{
	char Blar[100];
	int cnt = 0;
	//scanf_s("%s", &Blar);
	std::cin >> Blar;

	for (int i = 0; Blar[i] != '\0'; i++)
	{
		if (Blar[i] == '(')
			cnt++;
		else if (Blar[i] == ')')
			cnt--;
		if (cnt < 0) 
			break;
	}

	if (cnt == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	
	return 0;
}