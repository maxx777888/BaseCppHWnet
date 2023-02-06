#include <iostream>
#include <string>
#include <Windows.h>

/*Я не до конца понял условия задачи, на вебинаре из слов лектора мне показалось, что все три домашних задания связаны 
между собой. По этой причине я не менял конструкторы классов, которые созданы исходя из условий второй задачи, поэтому 
мне не совсем понятен смысл делать проверку на правильность фигур, потому что кроме стандартных треугольника 
(углы 180 градусов) и четырехугольника (углы 360 градусов),  остальные фигуры однозначно проходят проверку на правильность 
исходя из параметров заложенных в конструктор. На всякий случай, я переписал метод check() в каждом классе исходя из условий 
третей задачи, но по факту для логики программы они лишние. Если нужно этот момент исправить, это легко будет сделать 
просто поменяв параметры конструкторов в своих классах. */

class Figure
{
public:
    //Метод возвращает название фигуры
    std::string get_name() { return name; };
    //Метод возвращает количество сторон фигуры
    int get_sides() { return num_of_sides; }
    //Виртуальный метод делает проверку на правильность фигуры
    virtual bool check() { return true; }
    //Виртуальный метод который ввыводит на консоль информацию о фигуре 
    virtual void print_info() {
        std::cout << get_name() << ":" << std::endl; 
        if (check()) { std::cout << "Правильная" << std::endl; } else { std::cout << "Неправильная" << std::endl; }
        std::cout << "Количество сторон: " << get_sides() << std::endl;       
    };
    
protected:
    std::string name = "Фигура"; //Хранение название 
    int num_of_sides = 0;//Хранение количества сторон
};
//Создаем класс Треугольник 
class Triangle : public Figure
{
public:
    Triangle() { a = b = c = 0; A = B = C = 0; }//Пустой конструктор
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_) //Конструктор класса 
    {
        a = a_;
        b = b_;
        c = c_;
        A = A_;
        B = B_;
        C = C_;
        name = "Треугольник";
        num_of_sides = 3;
    }
    //Проверка на сумму углов
    bool check() override {
        if (A + B + C == 180) { return true; }
        else { return false; }
    }
    //Вывод информации о фигуре
    void print_info() override{
        Figure::print_info();
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
        std::cout << std::endl;
    }
    //Методы для получения значения сторон и углов
    int get_a() { return a; };//Метод возвращает значение стороны a
    int get_b() { return b; };//Метод возвращает значение стороны b
    int get_c() { return c; };//Метод возвращает значение стороны c
    int get_A() { return A; };//Метод возвращает значение угла A
    int get_B() { return B; };//Метод возвращает значение угла B
    int get_C() { return C; };//Метод возвращает значение угла C

protected:
    int a, b, c;//Хранение сторон
    int A, B, C;//Хранение углов
};
//Прямоугольный треугольник - наследуемый класс от треугольник
class RightTriangle : public Triangle
{
public:
    RightTriangle(int a_, int b_, int c_, int A_, int B_)//Конструктор класса
    {
        a = a_;
        b = b_;
        c = c_;
        A = A_;
        B = B_;
        C = 90;
        name = "Прямоугольный треугольник";
        num_of_sides = 3;
    }
    //Проверка на угол 90 градусов
    bool check() override {
        if (Triangle::check() && C == 90) { return true; }
        else { return false; }
    }
     
};
//Равнобедренный треугольник - наследуемый класс от треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int size_ac, int b_, int size_AC, int B_)//Конструктор класса
    {
        a = c = size_ac;
        b = b_;
        A = C = size_AC;
        B = B_;
        name = "Равнобедренный треугольник";
        num_of_sides = 3;
    }
    //Проверка на условия равнобедренного треугольника
    bool check() override {
        if (Triangle::check() && a == b && A == C) { return true; }
        else { return false; }
    }
   
};
//Равносторонний треугольник - наследуемый класс от треугольник
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int sizes)//Конструктор класса
    {
        a = b = c = sizes;
        A = B = C = 60;
        name = "Равносторонний треугольник";
        num_of_sides = 3;
    }
    //Проверка на условия равностороннего треугольника
    bool check() override {
        if (Triangle::check() && a == b && a == c && b == c && A == 60 && B == 60 && C == 60) { return true; }
        else { return false; }
    }
};
//Создаем класс Четырехугольник
class Quadrangle : public Figure 
{
public:
    Quadrangle() { a = b = c = d = 0; A = B = C = D = 0; }//Пустой конструктор
    Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) //Конструктор класса 
    {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
        A = A_;
        B = B_;
        C = C_;
        D = D_;
        name = "Четырехугольник";
        num_of_sides = 4;
    }
    //Проверка на равенство углов 360 градусов
    bool check() override {
        if (A + B + C + D == 360) { return true; }
        else { return false; }
    }
    //Вводим на консоль информацию о фигуре
    void print_info() override {
        Figure::print_info();
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
        std::cout << std::endl;
    }
    //Методы для хранения значения сторон и углов
    int get_a() { return a; };//Метод возвращает значение стороны a
    int get_b() { return b; };//Метод возвращает значение стороны b
    int get_c() { return c; };//Метод возвращает значение стороны c
    int get_d() { return d; };//Метод возвращает значение стороны d
    int get_A() { return A; };//Метод возвращает значение угла A
    int get_B() { return B; };//Метод возвращает значение угла B
    int get_C() { return C; };//Метод возвращает значение угла C
    int get_D() { return D; };//Метод возвращает значение угла D

protected:
    int a, b, c, d;//Хранение значений сторон
    int A, B, C, D;//Хранение значений углов
};
//Создаем базовый класс Прямоугольник наследуемый класс от Четырехугольник
class RectangleF : public Quadrangle
{
public:
    RectangleF(int a_, int b_) {//Конструктор класса
        a = c = a_;
        b = d = b_;
        A = B = C = D = 90;
        name = "Прямоугольник";
        num_of_sides = 4;
    }
    //Проверка на условия правильности прямоугольника
    bool check() override {
        if (Quadrangle::check() && a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) { return true; }
        else { return false; }
    }
};
//Создаем базовый класс Квадрат наследуемый класс от Четырехугольник
class Square : public Quadrangle
{
public:
    Square(int a_) {//Конструктор класса
        a = c = b = d = a_;
        A = B = C = D = 90;
        name = "Квадрат";
        num_of_sides = 4;
    }
    //Проверка на условия правильности квадрата
    bool check() override {
        if (Quadrangle::check() && a == c && b == d && a == b &&  A == 90 && B == 90 && C == 90 && D == 90) { return true; }
        else { return false; }
    }
};
//Создаем базовый класс Параллелограмм наследуемый класс от Четырехугольник
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_, int b_, int A_, int B_) {//Конструктор класса
        a = c = a_;
        b = d = b_;
        A = C = A_;
        B = D = B_;
        name = "Параллелограмм";
        num_of_sides = 4;
    }
    //Проверка на условия правильности параллелограмма
    bool check() override {
        if (Quadrangle::check() && a == c && b == d && A == C && B == D) { return true; }
        else { return false; }
    }
};
//Создаем базовый класс Ромб наследуемый класс от Четырехугольник
class Rhomb : public Quadrangle
{
public:
    Rhomb(int a_, int A_, int B_) {//Конструктор класса
        a = c = b = d = a_;
        A = C = A_;
        B = D = B_;
        name = "Ромб";
        num_of_sides = 4;
    }
    //Проверка на правильность условий ромба
    bool check() override {
        if (Quadrangle::check() && a == c && b == d && a == b && A == C && B == D) { return true; }
        else { return false; }
    }
};



int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    //Экземпляр базового класса фигура
    Figure f;
    f.print_info();
    std::cout << std::endl;
    //Экземпляр класса треугольник
    Triangle t(10, 20, 30, 50, 60, 70);
    t.print_info();
    //Экземпляр класса прямоугольний треугольник
    RightTriangle rt(10, 20, 30, 50, 60);
    rt.print_info();
    //Экземпляр класса равнобедренный треугольник
    IsoscelesTriangle i(10, 20, 50, 60);
    i.print_info();
    //Экземпляр класса равносторонний треугольник
    EquilateralTriangle e(30);
    e.print_info();
    //Экземпляр класса четырехугольник
    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    q.print_info();
    //Экземпляр класса прямоугольник
    RectangleF rf(10, 20);
    rf.print_info();
    //Экземпляр класса квадрат
    Square s(20);
    s.print_info();
    //Экземпляр класса параллелограмм
    Parallelogram p(20, 30, 30, 40);
    p.print_info();
    //Экземпляр класса ромб
    Rhomb romb(30, 30, 40);
    romb.print_info();
}

