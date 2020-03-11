#include <iostream>
#include "strucstack.h"

struct cock
{
	int a;
	int b;
	double c;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	strucstack<double> owo;
	
	//strucstack<cock> owo1;
	//cock t;
	int a = 1;
	int b = 2;
	double c = 3.2;
	int ct = 0;
	owo.top();
	while (ct++ != 5)
	{
		double temp;
		cin >> temp;
		owo.push(temp);
	}

	

	cout << "\nделете\n";

	owo.top(); 
	cout << endl;
	owo.print();
	owo.top();
	cout << endl;
	owo.print();
	cout << endl;
	cout << endl;
	//owo1.push(t);
	//owo1.print();

	return 0;
}

