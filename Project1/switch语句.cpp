#include <iostream>
using namespace std;

int main() {

	//switch语句
	//给电影打分
	//十分或者九分 经典
	//八分或者七分 非常好
	//六分或者五分 一般
	//五分以下 烂片

	//1、提示用户给电影评分
	//2、用户进行打分
	//3、根据用户输入分数来提示用户最后的结果
	cout << "请给电影进行打分:" << endl;

	int score = 0;
	cin >> score;
	cout << "电影的分数为：" <<score<< endl;

	switch (score) {
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好电影" << endl;
		break;
	case 6:
		cout << "您认为是一般的电影" << endl;
		break;
	case 5:
		cout << "您认为是一般的电影" << endl;
		break;
	default :
		cout << "你认为这是烂片" << endl;
	}


	//if和switch的区别：
	//switch缺点，在判断的时候只能是整整型或者字符型，不可以是一个区间
	//switch优点，结构清晰，执行效率高

	system("pause");
	return 0;
}