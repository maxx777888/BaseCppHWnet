#pragma once
#include <exception>

//Созданный класс исключения наследуемый от exception
class ExcClass : public std::exception
{
public:
    ExcClass(const char* cause_);
    ~ExcClass() = default;
    const char* what() const override;
    

protected:
    //Строка для хранение ошибок
    const char* cause_error;
};

