#include <iostream>
#include <string>
using namespace std;//�����ռ�

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
		"������",
		"��԰"
	};
	cout << "ѧ�ţ�" << wang.nummber << endl;
	cout << "���䣺" << wang.age << endl;
	cout << "������" << wang.name << endl;
	cout << "��ַ��" << wang.address << endl;
	int test;
	cout << "�����룺" << endl;
		cin >> test;
		system("pause");

	return 0;
}
