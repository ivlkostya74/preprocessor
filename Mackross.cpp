// Mackross.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define MODE 2

#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif 

int input() {
	int x;
	std::cout << std::endl << "«ddd number»:" << std::endl;
	std::cin >> x;
	return x;
}
int  add(int a, int b) {
	return a + b;
};


int main()
{

	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

#ifdef MODE

 #if MODE == 1
	std::cout << std::endl << "«Работаю в режиме тренировки»" << std::endl;

 #elif MODE == 2
	std::cout << std::endl << "«Работаю в боевом режиме»" << std::endl;
	int a = 0;
	int b = 0;
	a = input();
	b = input();
	std::cout << std::endl << add(a, b) << std::endl;
 #else MODE
	std::cout << std::endl << "«Неизвестный режим.Завершение работы»" << std::endl;
 #endif 
#endif
#ifndef MODE
	std::cout << std::endl << "Не включен #error и не определён #define MODE." << std::endl;
#endif
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
