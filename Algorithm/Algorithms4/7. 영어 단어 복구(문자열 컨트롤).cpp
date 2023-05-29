#include <stdio.h>
using namespace std;
// bE  au  T  I  fu L
int main()
{
	char Word[101], RecoveryWord[101];

	int pos = 0;
	gets_s(Word);

	for (int i = 0; Word[i] != '\0'; i++)
	{
		if (Word[i] != ' ')
		{
			// 아스키코드 대문자.
			if (Word[i] >= 65 && Word[i] <= 90)
			{
				// 아스키코드 소문자.
				RecoveryWord[pos++] = (Word[i]+32);
			}
			else
			{
				RecoveryWord[pos++] = Word[i];

			}

		}
	}
	
	RecoveryWord[pos] = '\0';
	printf("%s\n", RecoveryWord);


	return 0;
}