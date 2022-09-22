#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y;

	std::cout << "Введите x: ";
	std::cin >> x;

	std::cout << "Введите y: ";
	std::cin >> y;

	x += y;
	y = x - y;
	x -= y;

	std::cout << "Результат смены: ";
	std::cout << "x = " << x;
	std::cout << ", y = " << y << "\n";

	return 0;
}