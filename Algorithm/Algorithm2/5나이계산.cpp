#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

// 2019년도 기준으로 할 것.
// ex 780316-2376152
int main()
{
	char idcardNumber[20];
	int year, age;
	int current_year = 2019;
	string Gender;

	cin >> idcardNumber;
	
	int useridNumber=0; 


	if (idcardNumber[7] == '1' || idcardNumber[7] == '2')
	{
												// 아스키코드.
		useridNumber = 1900 + ((idcardNumber[0] - 48) * 10 + (idcardNumber[1] - 48));
	}
	else
	{
		useridNumber = 2000 + ((idcardNumber[0] - 48) * 10 + (idcardNumber[1] - 48));
	}
	
	Gender = ((int)idcardNumber[7] % 2 != 0) ? "M" : "W";

	cout << (current_year-useridNumber)+1<< "\t" << Gender;

	return 0;
}