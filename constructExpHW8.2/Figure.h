#pragma once
#include <string>
#include "ExcClass.h"

class Figure   //Базовый Класс Фигура
{
public:
    //Метод возвращает название фигуры
    std::string get_name();
protected:
    std::string name = "Фигура"; //Хранение название 
    
};
