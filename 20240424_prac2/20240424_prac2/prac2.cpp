//
// John, 240424
// Â¦¼ö, È¦¼ö¸¦ ±¸ºÐÇÏ±â
//
#include <iostream>
using namespace std;
void main()
{
	string city[5] = { "korea", "china", "japan", "america", "canada"};
	int arraySize = sizeof(city) / sizeof(city[0]);

	string input1;
	cin >> input1;
	if (input1 == "list")
	{
		for (int i = 0; i < arraySize; i++)
		{
			cout << city[i] << endl;
		}
	}
	cout << "--------------" << endl;

	string input2;
	cin >> input2;
	for (int i = 0; i < arraySize; i++)
	{
		if (input2 == city[i])
		{
			cout << "³ª¶ó ÀÌ¸§ : " << city[i] << "\n" << "ÀÎµ¦½º : " << i << endl;
		}
	}
}