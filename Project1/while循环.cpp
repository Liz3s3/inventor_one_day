#include <iostream>
using namespace std;

int main() {

	//while循环
	//在屏幕中打印0-9十个数字

	int num = 5;
	//注意：在写循环的时候一定要避免死循环
	while (num < 6) {

		cout << num << endl;
		num++;
	}
	cout << num << endl;

	system("pause");
	return 0;
}