#include <iostream>
#include <string>
#include <Windows.h>

//Объявление функции 
int function(std::string str, int forbidden_length)
{   //Ловим ошибку, если длина слова составляет запретную длину
    if (forbidden_length == str.length())
    {
        throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
    }
    else 
    { //Если длина не совпадает, возвращает длину слова
        return str.length();
    }
        
}

int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    //Необъходимые переменные
    std::string word;
    int bad_length;
    //Запрос на ввод запретной длины
    std::cout << "Введите запретную длину: " <<std::endl;
    std::cin >> bad_length;
    //Цикл, который будет выполнятся пока длина слова не совпадет с запретной длиной
    do {
    std::cout << "Введите слово: " <<std::endl;
    std::cin >> word;
    //Блок которые ловит ошибку при совпадение длины
    try {
        std::cout << "Длина слова \"" << word << "\" равна " << function(word, bad_length) << std::endl;
    }
    catch (const std::exception& e)
    {//Вывод ошибки на консоль
        std::cout << e.what() << std::endl;
    }
    } while (bad_length != word.length());
}


