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

	cout << "첫 번째 정수:";
	cin >> a;

	cout << endl << "두 번째 정수:";
	cin >> b;

	cout << endl << "세 번째 정수:";
	cin >> c;

	cout <<"입력 받은 정수는 각각 "<< a <<" , "<< b <<" , "<< c<<" 입니다.";

	*/

	
	

	cout << "첫 번째 정수:";
	cin >> problem::no1::a;

	cout << endl << "두 번째 정수:";
	cin >> problem::no1::b;

	cout << "입력 받은 정수는 각각 " << problem::no1::a << " , " << problem::no1::b << " 입니다."<<endl;

	cout << "두 정수의 합은  " << problem::no1::a + problem::no1::b << "  이고," << endl;
	cout << "첫번째 숫자에서 두번째 숫자를 뺀 결과는  " << problem::no1::a - problem::no1::b << "  입니다." << endl << endl;


	

	cout << "첫 번째 정수:";
	cin >> problem::no2::a;

	cout << endl << "두 번째 정수:";
	cin >> problem::no2::b;

	cout << endl << "세 번째 정수:";
	cin >> problem::no2::c;

	cout << "입력 받은 정수는 각각 " << problem::no2::a << " , " << problem::no2::b << " , " << problem::no2::c << " 입니다." << endl;
	cout << " (num1+num2) * (num3+num1) % num1 의 값은" << endl;
	cout << "  "<<(problem::no2::a + problem::no2::b) * (problem::no2::c + problem::no2::a) % problem::no2::a << "  입니다." << endl<<endl;

	

	cout << "첫 번째 정수:";
	cin >> problem::no3::a;

	cout << endl << "두 번째 정수:";
	cin >> problem::no3::b;

	cout << "입력받은 두 정수는" << problem::no3::a << "이고," << problem::no3::b << "입니다." << endl;
	cout << "A에서B를 나눈 몫은" << problem::no3::a / problem::no3::b << "이고, 나머지는" << problem::no3::a % problem::no3::b << "입니다." << endl;
	
}