#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");

	//Задание 1.1
	std::cout << "Задание 1.1: Выведем числа 1, 13 и 49 с одним пробелом между ними...\n" << "11 13 49\n";
	system("pause");

	//Задание 1.2
	std::cout << "Задание 1.2: Введите символ\n";
	char a1;
	std::cin >> a1;
	std::cout << "Выведем числа 1, 13 и 49 с заданным символом между ними...\n" << 11 << a1 << 13 << a1 << 49 << std::endl;
	system("pause");

	//Задание 1.3
	std::cout << "Задание 1.3: Введите три любых числа\n";
	int a2, b, c;
	std::cin >> a2 >> b >> c;
	std::cout << "Выведем строку заданных чисел с двумя пробелами между ними...\n" << a2 << "  " << b << "  " << c << std::endl;
	system("pause");

	//Задание 1.4
	std::cout << "Задание 1.4: Введите a\n";
	int a, x, y;
	std::cin >> a;
	x = 12 * a * a + 7 * a - 12;
	std::cout << "Вычислим значение функции x = 12a^2 + 7a - 12\n" << "x = " << x << std::endl << "Введите x\n";
	std::cin >> x;
	y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << "Вычислим значение функции  y = 3x^3 + 4x^2 - 11x + 1\n" << "y = " << y << std::endl;
	system("pause");

	//Задание 2.1
	std::cout << "Задание 2.1: Введите массу и объем тела\n";
	double V, m, r;
	std::cin >> m >> V;
	r = m / V;
	std::cout << "Плотность равна: " << r << std::endl;
	system("pause");

	//Задание 2.2
	std::cout << "Задание 2.2: Введите a и b\n";
	double a3, b2, q;
	std::cin >> a3 >> b2;
	while (a3 == 0)
	{
		std::cout << "Введите другое значение a\n";
		std::cin >> a3;
	}
	q = -b2 / a3;
	std::cout << "Решим уравнение ax + b = 0\n" << "x = " << q << std::endl;
	system("pause");

	//Задание 2.3
	std::cout << "Задание 2.3: Введите координаты первой точки\n";
	double x1, y1, x2, y2, l;
	std::cin >> x1 >> y1;
	std::cout << "Введите координаты второй точки\n";
	std::cin >> x2 >> y2;
	l = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	l = pow(l, 0.5);
	std::cout << "Длина отрезка равна " << l << std::endl;
	system("pause");

	//Задание 2.4
	std::cout << "Задание 2.4: Введите значения оснований (от меньшей к большей) и высоты трапеции\n";
	double a4, b3, c1, e1, e2;
	std::cin >> a4 >> b3 >> c1;
	e1 = (b3 - a4) / 2;
	e1 = pow(e1, 2);
	e2 = c1 * c1;
	e1 += e2;
	e1 = pow(e1, 0.5);
	e1 = 2 * e1 + a4 + b3;
	std::cout << "Периметр трапеции равен " << e1 << std::endl;
	system("pause");


	//Задание 2.5
	std::cout << "Задание 2.5: Введите значение большего радиуса\n";
	double r1, r2;
	std::cin >> r1;
	std::cout << "Введите значение меньшего радиуса\n";
	std::cin >> r2;
	q = 3.14 * (r1 * r1 - r2 * r2);
	std::cout << "Площадь кольца равна " << q << std::endl;

	//Задание 2.6
	std::cout << "Задание 2.6: Введите значение длины ребра куба\n";
	double l2, z;
	std::cin >> l2;
	z = pow(l2, 3);
	std::cout << "Объем куба равен " << z << std::endl;
	z = z / l2 * 4;
	std::cout << "Площадь боковой поверхности куба равна " << z << std::endl;
	system("pause");

	//Задание 2.7
	std::cout << "Задание 2.7: Введите значение длины стороны квадрата\n";
	std::cin >> z;
	z *= 4;
	std::cout << "Периметр квадрата равен " << z << std::endl;
	system("pause");

	//Задание 2.8
	std::cout << "Задание 2.8: Введите значение радиуса окружности\n";
	std::cin >> z;
	z *= 2;
	std::cout << "Диаметр окружности равен " << z << std::endl;
	system("pause");

	//Задание 2.9
	std::cout << "Задание 2.9: Введите свое имя\n";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "! My name is C++." << std::endl;
	system("pause");

	//Задание 2.10
	std::cout << "Задание 2.10: Введите слово\n";
	int g = 0;
	char word[8];
	std::cin >> word;
	for (int i1 = 0, i2 = 6; i1 < 3; i1++, i2--)
	{
		if (word[i1] == word[i2]) g++;
	}
	if (g == 3) std::cout << "This is polindrom!\n";
	else std::cout << "Sorry, this is not polindrom!\n";
	system("pause");
}