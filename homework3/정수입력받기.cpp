#include <iostream>

using std::cout;
using std::cin;
using std::endl;
namespace problem
{
	namespace no1
	{
		int a;
		int b;
		int c;
	}
	namespace no2
	{
		int a;
		int b;
		int c;
	}
	namespace no3
	{
		int a;
		int b;
		int c;
	}
}

void main()

{
	/*
	int a,b,c;

	cout << "ù ��° ����:";
	cin >> a;

	cout << endl << "�� ��° ����:";
	cin >> b;

	cout << endl << "�� ��° ����:";
	cin >> c;

	cout <<"�Է� ���� ������ ���� "<< a <<" , "<< b <<" , "<< c<<" �Դϴ�.";

	*/

	
	

	cout << "ù ��° ����:";
	cin >> problem::no1::a;

	cout << endl << "�� ��° ����:";
	cin >> problem::no1::b;

	cout << "�Է� ���� ������ ���� " << problem::no1::a << " , " << problem::no1::b << " �Դϴ�."<<endl;

	cout << "�� ������ ����  " << problem::no1::a + problem::no1::b << "  �̰�," << endl;
	cout << "ù��° ���ڿ��� �ι�° ���ڸ� �� �����  " << problem::no1::a - problem::no1::b << "  �Դϴ�." << endl << endl;


	

	cout << "ù ��° ����:";
	cin >> problem::no2::a;

	cout << endl << "�� ��° ����:";
	cin >> problem::no2::b;

	cout << endl << "�� ��° ����:";
	cin >> problem::no2::c;

	cout << "�Է� ���� ������ ���� " << problem::no2::a << " , " << problem::no2::b << " , " << problem::no2::c << " �Դϴ�." << endl;
	cout << " (num1+num2) * (num3+num1) % num1 �� ����" << endl;
	cout << "  "<<(problem::no2::a + problem::no2::b) * (problem::no2::c + problem::no2::a) % problem::no2::a << "  �Դϴ�." << endl<<endl;

	

	cout << "ù ��° ����:";
	cin >> problem::no3::a;

	cout << endl << "�� ��° ����:";
	cin >> problem::no3::b;

	cout << "�Է¹��� �� ������" << problem::no3::a << "�̰�," << problem::no3::b << "�Դϴ�." << endl;
	cout << "A����B�� ���� ����" << problem::no3::a / problem::no3::b << "�̰�, ��������" << problem::no3::a % problem::no3::b << "�Դϴ�." << endl;
	
}