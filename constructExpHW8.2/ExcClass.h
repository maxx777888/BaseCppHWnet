#pragma once
#include <exception>

//��������� ����� ���������� ����������� �� exception
class ExcClass : public std::exception
{
public:
    ExcClass(const char* cause_);
    ~ExcClass() = default;
    const char* what() const override;
    

protected:
    //������ ��� �������� ������
    const char* cause_error;
};

