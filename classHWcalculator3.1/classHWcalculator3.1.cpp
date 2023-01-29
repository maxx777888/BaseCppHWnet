#include <iostream>

class Calculator
{
public:  
    //Метод сложения
    double add() {
        return num1 + num2;
    }
    //Метод вычитания из второго числа первого
    double subtract_1_2() {
        return num2 - num1;
    }
    //Метод вычитания из первого числа второго
    double subtract_2_1() {
        return num1 - num2;
    }
    //Метод умножения
    double multiply() {
        return num1 * num2;
    }
    //Метод деления первого числа на второе
    double divide_1_2() {
        return num1 / num2;
    }
    //Метод деления вторго числа на первое
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1); //Присваивание значение первому числу
    bool set_num2(double num2); //Присваивание значение второму числу

private:
    double num1;
    double num2;
};

bool Calculator::set_num1(double _num1) {
    if (_num1 != 0) {
        num1 = _num1;
        return true;
    }
    else {
        std::cout << "Неверный ввод!" << std::endl;
        return false;
    }
}

bool Calculator::set_num2(double _num2) 
{
    if (_num2 != 0) {
        num2 = _num2;
        return true;
    }
    else {
        std::cout << "Неверный ввод!" << std::endl;
        return false;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    do
    {
        double n1, n2;
        Calculator numbers;
        bool check = false;
        //Запрос и проверка на 0 первого числа 
        std::cout << "Введите num1:\n";
        std::cin >> n1;
        check = numbers.set_num1(n1);
        while (check != true) {
            std::cout << "Введите num1:\n";
            std::cin >> n1;
            check = numbers.set_num1(n1);
        }
        //Запрос и проверка на 0 второго числа 
        std::cout << "Введите num2:\n";
        std::cin >> n2;
        check = numbers.set_num2(n2);
        while (check != true) {
            std::cout << "Введите num2:\n";
            std::cin >> n2;
            check = numbers.set_num2(n2);
        }
        //Вывод всех операций с числами на экран
        std::cout << "num1 + num2 = " << numbers.add() << std::endl;
        std::cout << "num1 - num2 = " << numbers.subtract_2_1() << std::endl;
        std::cout << "num2 - num = " << numbers.subtract_1_2() << std::endl;
        std::cout << "num1 * num = " << numbers.multiply() << std::endl;
        std::cout << "num1 / num2 = " << numbers.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << numbers.divide_2_1() << std::endl;

    } while (true);
    

    
    


}

