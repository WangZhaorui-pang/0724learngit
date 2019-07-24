#include <iostream>
#include <string>
using namespace std;//命名空间

struct SummerTrain
{
	char nummber[20];
	int age;
	string name;
	string address;

};



int main()
{
	SummerTrain wang =
	{
		"P19201049",
		22,
		"王兆瑞",
		"慧园"
	};
	cout << "学号：" << wang.nummber << endl;
	cout << "年龄：" << wang.age << endl;
	cout << "姓名：" << wang.name << endl;
	cout << "地址：" << wang.address << endl;
	int test;
	cout << "请输入：" << endl;
		cin >> test;
		system("pause");

	return 0;
}
