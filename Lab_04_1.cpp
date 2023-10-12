// Lab_04_1.cpp
// Кругліцький Мстислав
// Лабораторна робота № 4.1
// Цикли
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, i;
	double P1, P2, P3, P4;

	cout << "N = "; cin >> N;

	// while(…) { … }
	P1 = 1;
	i = N;
	while (i <= 10)
	{
		P1 *= (i + 1 / (i * i)) / sqrt(1 + exp(1 / i));
		i++;
	}

	cout << "P1 = " << P1 << endl;

	// do{ … } while(…);
	P2 = 1;
	i = N;
	do {
		P2 *= (i + 1 / (i * i)) / sqrt(1 + exp(1 / i));
		i++;

	} while (i <= 10);

	cout << "P2 = " << P2 << endl;

	//for(…; …; n++) {… } 
	P3 = 1;
	i = N;
	for (i = N; i <= 10; i++)
	{
		P3 *= (i + 1 / (i * i)) / sqrt(1 + exp(1 / i));
	}

	cout << "P3 = " << P3 << endl;

	//for(…; …; n--) {… }
	P4 = 1;
	for (i = 10; i >= N; i--)
	{
		P4 *= (i + 1 / (i * i)) / sqrt(1 + exp(1 / i));
	}

	cout << "P4 = " << P4 << endl;
		
	return 0;
}