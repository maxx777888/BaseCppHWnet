#include <iostream>
#include <string>
#include <windows.h>

class Counter
{
public:
	//Конструктор без параметров
    Counter (){
        count = 1;
    }
	//Конструктор с параметрами заданными пользователем
    Counter (int _count){
        count = _count;
    }
	//Метод вывода на экран текущего состояния счетчика
    void print_count() {
        std::cout << "Значение счетчика: " << count << std::endl;
    }
	//Метод добавление к счетчику единицы
    void add() {
        count += 1;
    }
	//Метод вычетания из счетчика единицы
    void sub() {
		count -= 1;    
    }
private:
	int count;
    
};

//Проверка на изначальный выбор пользователя для инициализации счетчика
bool is_YES(std::string str) 
{
	if ((str == "YES") || (str == "Yes") || (str == "yes") || (str == "ДА") || (str == "да") || (str == "Да")) {
		return true;
	}
	else {
		return false;
	}
	
 }

int main()
{
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
			else if ( (x == 'x') || (x == 'х')) { //Выход из цикла
				exit = true;
			}
		} while (exit != true);
	}
	std::cout << "До свидания!" << std::endl;

}

