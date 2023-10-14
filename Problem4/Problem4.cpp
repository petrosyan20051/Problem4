#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

#define i 8

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 

	int masa[i], masb[i]; // masa - массив альфа, masb - массив бета
	int temp = 0, a_l, a_r, b_l, b_r; // a, b - название массива | l,r - левая и правая граница отрезка

	cout << "Введите границы отрезка чисел, входящих в массивы a и b (сначала для a, потом для b): " << endl;
	cin >> a_l >> a_r >> b_l >> b_r;


	while (temp != 8) // элементы masa
	{
		masa[temp] = a_l + rand() % (a_r - a_l + 1);
		//cout << "masa[" << temp << "] = " << masa[temp] << endl; 
		temp += 1;
	}
	temp = 0;

	while (temp != 8) // элементы masb
	{
		masb[temp] = b_l + rand() % (b_r - b_l + 1);
		//cout << "masb[" << temp << "] = " << masb[temp] << endl;
		temp += 1;
	}
	temp = 0;

	long float f; // f - значение выражения (Si) для каждого i
	int s1 = 0, s2 = 0; // суммы элементов массива masa и masb

	for (temp; temp < i; temp++)
	{
		s1 += masa[temp];
		s2 += masb[temp];
	}
	temp = 0;

	for (temp; temp < i; temp++) // Рассчитываем Si для кажого i
	{

		f = masa[temp] / 1.0 / s1 + s2 / 1.0 / masb[temp]; // вычисляем значение выражение
		cout << 'S' << temp + 1 << " = " << setprecision(6) << f << endl;
	}
	
	_getch();
	return 0;
}