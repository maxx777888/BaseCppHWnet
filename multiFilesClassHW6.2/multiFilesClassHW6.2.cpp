#include <iostream>
#include <string>
#include <windows.h>
#include "Counter.h"

int main()
{
    //Необходимые настройки для работы с русским языком
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

	std::string str;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите YES(ДА) или NO(Любой символ):\n";
	std::cin >> str;
	char x;
	bool exit = false; //Переменная которая отвечает за выход из цикла

	//Проверка на инициализацию счетчика пользователем
	if (is_YES(str)) {
		int num;
		std::cout << "Введите начальное значение счётчика: " << std::endl;
		std::cin >> num;
		Counter counter(num);//Установка счетчика данными полученными от пользователя

		do
		{
			//Операции со счетчиком взависимости от ввода символов пользователем
			std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
			std::cin >> x;

			if (x == '+') { //Добавление в счетчик
				counter.add();
			}
			else if (x == '-') { //Вычитание из счетчика
				counter.sub();
			}
			else if (x == '=') { //Вывод значения счетчика на экран
				counter.print_count();
			}
			else if ((x == 'x') || (x == 'х')) { //Выход из цикла
				exit = true;
			}
		} while (exit != true);

	}
	else {
		Counter counter; //Установка счетчика конструктором без параметров.
		do
		{
			//Операции со счетчиком взависимости от ввода символов пользователем
			std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
			std::cin >> x;

			if (x == '+') { //Добавление в счетчик
				counter.add();
			}
			else if (x == '-') { //Вычитание из счетчика
				counter.sub();
			}
			else if (x == '=') { //Вывод значения счетчика на экран
				counter.print_count();
			}
			else if ((x == 'x') || (x == 'х')) { //Выход из цикла
				exit = true;
			}
		} while (exit != true);
	}
	std::cout << "До свидания!" << std::endl;
}


