#include "ExcClass.h"

ExcClass::ExcClass(const char* cause_msg)
{
    ////������ � �������
    cause_error = cause_msg;
}
//������������ ����� what ��� ������ ������� ������.
const char* ExcClass::what() const
{
    return cause_error;
}




