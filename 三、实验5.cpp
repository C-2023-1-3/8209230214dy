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
	cout <<"С���ӵ�һ�칲ժ��"<< sum <<"�����ӡ�"<< endl;

	return 0;
}



