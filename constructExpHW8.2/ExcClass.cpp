#include "ExcClass.h"

ExcClass::ExcClass(const char* cause_msg)
{
    ////Строка с ошибкой
    cause_error = cause_msg;
}
//Переписанный метод what для вывода причины ошибки.
const char* ExcClass::what() const
{
    return cause_error;
}




