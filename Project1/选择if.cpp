#include <iostream>
using namespace std;

int main() {

	while (true)
	{
		/*选择结构 多条件if语句
		输入考试分数，如果大于600分，视为考上一本，输出
		大于500，视为考上二本
		大于400，是为考上三本
		小于等于400，是为未考上本科*/
		//1.用户输入分数
		int score = 0;
		cout << "请输入高考考试分数: " << endl;
		cin >> score;
		//2.显示高考分数
		cout << "您输入的分数为: " << score << endl;
		
		//3.判断
		if (score > 600)
		{
			cout << "恭喜考上一本大学" << endl;
			if (score > 700)
			{
				cout << "您能考入北京大学"<< endl;
			}
			else if (score > 650)
			{
				cout << "您能考入清华大学" << endl;
			}
			else
			{
				cout << "您能考入同济大学" << endl;
			}
		}
		else if (score > 500)
		{
			cout << "恭喜考上二本大学" << endl;
		}
		else if (score > 400)
		{
			cout << "三本大学" << endl;
		}
		else 
		{
			cout << "未考上本科，建议复读" << endl;
		}
	}

	


	system("pause");
	return 0;
}