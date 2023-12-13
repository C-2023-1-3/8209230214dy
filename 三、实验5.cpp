#include <iostream>
using namespace std;

int num(int n)
{
	return 2 * (n + 1);
}

int main()
{
	int sum = 1;
	for (int i = 1; i < 10; i++) {
		sum = num(sum);
	}
	cout <<"小猴子第一天共摘了"<< sum <<"个桃子。"<< endl;

	return 0;
}



