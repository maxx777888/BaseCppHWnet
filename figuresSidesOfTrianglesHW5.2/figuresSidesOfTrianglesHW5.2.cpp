#include <iostream>
#include <string>
#include <Windows.h>

class Figure //Базовый Класс Фигура
{
public:
    //Метод возвращает название фигуры
    std::string get_name() { return name;}
    //Виртуальный метод для вывода значений на экран
    virtual void printInfo() = 0;
    
protected:
    std::string name = "Фигура";//Хранение название фигуры 
};

class Triangle : public Figure//Создаем базовый класс Треугольник 
{
public:
    Triangle() { a = b = c = 0; A = B = C = 0; }//Пустой конструктор
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_) //Конструктор базового класса 
    {
        a = a_;
        b = b_;
        c = c_;
        A = A_;
        B = B_;
        C = C_;
        name = "Треугольник";
    }
    //Методы для получения информации о значении сторон и углов треугольника
    int get_a() { return a; };//Метод возвращает значение стороны a
    int get_b() { return b; };//Метод возвращает значение стороны b
    int get_c() { return c; };//Метод возвращает значение стороны c
    int get_A() { return A; };//Метод возвращает значение угла A
    int get_B() { return B; };//Метод возвращает значение угла B
    int get_C() { return C; };//Метод возвращает значение угла C

    //Переписанный метод для вывода значений на экран экземляров класса Треугольник
    void printInfo() override 
    {
        std::cout << get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
        std::cout << std::endl;
    }
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
    }
};
//Равнобедренный треугольник - наследуемый класс от треугольник
class IsoscelesTriangle : public Triangle 
{
public:
    IsoscelesTriangle(int size_ac, int b_,  int size_AC, int B_)//Конструктор класса
    {   
        a = c = size_ac;
        b = b_;
        A = C = size_AC;
        B = B_;   
        name = "Равнобедренный треугольник";
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
    }
};

//Создаем базовый класс Четырехугольник
class Quadrangle : public Figure 
{
public:
    Quadrangle(){ a = b = c = d = 0; A = B = C = D = 0; }//Пустой конструктор
    Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) //Конструктор базового класса 
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
    }
    //Методы для получения информации о значении сторон и углов
    int get_a() { return a; };//Метод возвращает значение стороны a
    int get_b() { return b; };//Метод возвращает значение стороны b
    int get_c() { return c; };//Метод возвращает значение стороны c
    int get_d() { return d; };//Метод возвращает значение стороны d
    int get_A() { return A; };//Метод возвращает значение угла A
    int get_B() { return B; };//Метод возвращает значение угла B
    int get_C() { return C; };//Метод возвращает значение угла C
    int get_D() { return D; };//Метод возвращает значение угла D

    //Переписанный метод для вывода значений на экран экземляров класса Четырехугольник
    void printInfo() override
    {
        std::cout << get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
        std::cout << std::endl;
    }
protected:
    int a, b, c, d;
    int A, B, C, D;
};
//Создаем класс Прямоугольник наследуемый от Четырехугольника
class RectangleF : public Quadrangle
{
public:
    RectangleF(int a_, int b_) {//Конструктор класса
        a = c = a_;
        b = d = b_;
        A = B = C = D = 90;
        name = "Прямоугольник";
    }
};
//Создаем класс Квадрат наследуемый от Четырехугольника
class Square : public Quadrangle
{
public:
    Square(int a_) {//Конструктор класса
        a = c = b = d = a_;
        A = B = C = D = 90;
        name = "Квадрат";
    }
};
//Создаем класс Параллелограмм наследуемый от Четырехугольника
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_, int b_, int A_, int B_) {//Конструктор класса
        a = c = a_;
        b = d = b_;
        A = C = A_;
        B = D = B_;
        name = "Параллелограмм";
    }
};
//Создаем класс Ромб наследуемый от Четырехугольника
class Rhomb : public Quadrangle
{
public:
    Rhomb(int a_, int A_, int B_) {//Конструктор класса
        a = c = b = d = a_;
        A = C = A_;
        B = D = B_;
        name = "Ромб";
    }
};
//Функция, выводит на экран значения, наследуемого класса от базового класса Фигуры
void print_info(Figure* x) 
{
    x->printInfo();
}


int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    //Экземпляр класса треугольник
    Triangle t(10, 20, 30, 50, 60, 70);
    print_info(&t);
    //Экземпляр класса прямоугольний треугольник
    RightTriangle rt(10, 20, 30, 50, 60);
    print_info(&rt);
    //Экземпляр класса равнобедренный треугольник
    IsoscelesTriangle i(10, 20, 50, 60);
    print_info(&i);
    //Экземпляр класса равносторонний треугольник
    EquilateralTriangle e(30);
    print_info(&e);
    //Экземпляр класса четырехугольник
    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&q);
    //Экземпляр класса прямоугольник
    RectangleF rf(10, 20);
    print_info(&rf);
    //Экземпляр класса квадрат
    Square s(20);
    print_info(&s);
    //Экземпляр класса параллелограмм
    Parallelogram p(20, 30, 30, 40);
    print_info(&p);
    //Экземпляр класса ромб
    Rhomb romb(30, 30, 40);
    print_info(&romb);
}

