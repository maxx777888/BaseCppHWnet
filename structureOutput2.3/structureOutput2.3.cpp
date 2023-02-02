#include <iostream>
#include <string>

struct adress
{
    std::string country;
    std::string city;
    std::string street;
    int home;
    int flat;
    int index;

};

void print_adress(const adress m)
{
    std::cout << m.country << std::endl;
    std::cout << m.city << std::endl;
    std::cout << m.street << std::endl;
    std::cout << m.home << std::endl;
    std::cout << m.flat << std::endl;
    std::cout << m.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    adress moscow = { "Россия", "Москва", "Полежаевская", 143, 7, 193007 };
    adress krasnodar = { "Россия", "Краснодар", "Красная", 11, 18, 398007 };

    print_adress(moscow);
    print_adress(krasnodar);
}


