//猜数字
#include <iostream>
#include <ctime>//time系统头文件
using namespace std;
int main() {
	//添加随机数种子 利用当前系统时间生成随机数，当值每次随机数都一样
	srand((unsigned int)time(0));
	//1、系统生成随机数
	int num = rand()%100 + 1; //生成一个0-99的随机数
	//cout << num << endl;
	//2、玩家进行猜测
	int val = 0;
	while (1) {
		cin >> val;

		//3、判断玩家的猜测
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		//猜对 退出游戏
		else if (val < num) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "猜对了" << endl;
			break; //在循环中，可以用break推出当前循环
		}
		//猜错 猜的结果过大或过小 重新返回第二步
	}
	



	system("pause");
	return 0;
}