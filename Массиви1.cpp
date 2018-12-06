// Массиви1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1)	Дано масив натуральних чисел. Вивести на екран без повторень всі трійки чисел з масиву, 
//які є сторонами гострокутного трикутника 

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void input_mass(int n, int*a)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10 + 1;
}
void output_mass(int n, int*a)
{
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl;
}
void prepare_mass( int n, int* a)
{
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++)
		if (a[i] == a[j])
			a[j] = 0;
}
void triangles(int n, int*a)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++)
				if (pow(a[i], 2) + pow(a[j], 2) > pow(a[k], 2) && pow(a[i], 2) + pow(a[k], 2) > pow(a[j], 2) && pow(a[j], 2) + pow(a[k], 2) > pow(a[i], 2))
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
		}
	}
}
int main()
{
	 int n = 15;
	int *a = new int[n];
	input_mass(n, a);
	output_mass(n, a);
	prepare_mass(n, a);
    output_mass(n, a);
	triangles(n, a);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
