#pragma once
#include <string>
#include "ExcClass.h"

class Figure   //������� ����� ������
{
public:
    //����� ���������� �������� ������
    std::string get_name();
protected:
    std::string name = "������"; //�������� �������� 
    
};
