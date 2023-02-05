#include <iostream>
#include <string>
#include <Windows.h>



class Figure //Базовый класс Фигура
{
public:
    Figure() { set_sides_count(0); name = "Фигура"; } //Конструктор базового класса
    int get_sides_count() { return sides_count; }//Метод возвращает кол-во сторон при вызове. 
    std::string get_name() { return name; } //Метод возвращает название фигуры. 
protected:
    void set_sides_count(int a) { sides_count = a; }//Сеттер для установки кол-ва сторон
    std::string name;//Защищенное название фигуры
private:
    int sides_count; //Приватное число кол-во сторон. 
};
//Производный класс Треугольник наследуемый от класса Фигура
class Triangle : public Figure 
{
public:
    Triangle() { set_sides_count(3); name = "Треугольник"; }//Конструктор класса   
};
//Производный класс Четырехугольник наследуемый от класса Фигура
class Quadrangle : public Figure 
{
public:
    Quadrangle() { set_sides_count(4); name = "Четырехугольник"; }//Конструктор класса
};

int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    
    Figure f;//Объекта класса Фигуры
    Triangle t;//Объекта класса Треугольник
    Quadrangle q;//Объекта класса Четырехугольник

    std::cout << "Количество сторон: " << std::endl;
    std::cout << f.get_name() << ": " << f.get_sides_count() << std::endl;
    std::cout << t.get_name() << ": " << t.get_sides_count() << std::endl;
    std::cout << q.get_name() << ": " << q.get_sides_count() << std::endl;
}


