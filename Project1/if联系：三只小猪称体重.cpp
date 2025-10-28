#include <iostream>
using namespace std;

int main() {

	//1.三只小猪称体重，判断哪只最重
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	//2.让用户输入三只小猪的体重
	cout << "请输入小猪1的体重" << endl;
	cin >> pig1;

	cout << "请输入小猪2的体重" << endl;
	cin >> pig2;

	cout << "请输入小猪3的体重" << endl;
	cin >> pig3;

	cout << "小猪1的体重为: " << pig1 << endl;
	cout << "小猪2的体重为: " << pig2 << endl;
	cout << "小猪3的体重为: " << pig3 << endl;

	//3.判断哪知最重
	if (pig1 > pig2)//1比2重
	{
		if (pig1 > pig3)
		{
			cout << "小猪1最重" << endl;
		}
		else //3比1重
		{
			cout << "小猪3最重" << endl;
		}
	}
	else //2比1重
	{
		if (pig2 > pig3)
		{
			cout << "2最重" << endl;
		}
		else //3比2重
		{
			cout << "3最重" << endl;
		}
	}
	system("pause");
	return 0;
}