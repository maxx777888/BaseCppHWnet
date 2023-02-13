#include <iostream>
#include <Windows.h>

#define MODE 1
//Проверка на значение MODE как 1 ведь по условию задачи, если нет то функция add не должна быть определена
#if MODE == 1
int add(int x, int y) 
{
	return x + y;
}
#endif

int main()
{
	//Необходимые настройки консоли, для правильной работы с русским языком.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

#if !defined (MODE) //Проверка на определения константы MODE
//Сообщение об ошибке в случае если MODE не определена
#error "Константа MODE не определена, необходимо определить MODE"

#elif (MODE == 0)//Если MODE определена как ноль

	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif (MODE == 1)//Если MODE определена как 1

	std::cout << "Работаю в боевом режиме" << std::endl;
	int a;
	int b;
	std::cout << "Введите число 1:" << std::endl;
	std::cin >> a;
	std::cout << "Введите число 2:" << std::endl;
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a,b) << std::endl;

#else //Если MODE определена любым числом отличным от 0 и 1
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}

