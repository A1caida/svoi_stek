#include <iostream>
#include "strucstack.h"

template<typename T>
void uwu(strucstack<T> owo)
{
	int a;
	cout << "Сколько значений" << endl;
	//cin >> a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Некоректные данные" << endl;
	}
	for (size_t i = 0; i < a; i++)
	{
		T temp;
		cout << "Введите значение" << endl;
		while (!(cin >> temp) || (cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');
			cout << "Некоректные данные" << endl;
		}
		owo.push(temp);
	}
	owo.print(); cout << endl;
	owo.top(); cout << endl; owo.print();

}

int main()
{
	setlocale(LC_ALL, "Russian");
	strucstack<int> owo;
	strucstack<double> owo1;
	strucstack<float> owo2;
	strucstack<char> owo3;
	strucstack<string> owo4;
	strucstack<bool> owo5;

	uwu(owo);
	uwu(owo1);
	uwu(owo2);
	uwu(owo3);
	uwu(owo4);
	uwu(owo5);

}

