#include <iostream>

using std::cout;
using std::endl;

void main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			cout << " ";
		}

		for (int z = 1; z <= i; z++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int z = 1; z <= i; z++)
		{
			cout << "*";
		}


		for (int j = i; j <= 5; j++)
		{
			cout << " ";
		}

		cout << endl;
	}

	for (int i = 1; i <= 6; i++)
	{
		for(int j=6-i;j>=0;j--)
		{
			cout << " ";
		}
		for (int z=1;z<=2*i;z++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 6 - i; j >= 0; j--)
		{
			cout << " ";
		}
		for (int z = 1; z <= 2 * i; z++)
		{
			cout << "*";
		}
				cout << endl;
	}


	



}