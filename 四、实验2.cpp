#include <cmath>
#include <iostream>
using namespace std;
double bs(double *list){
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <= sizeof(list); j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " ";
	}
	return 0;
}
int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	bs(arr);
}


