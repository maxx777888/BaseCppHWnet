#include <iostream>
#include <fstream>
#include <string>



class address
{
public:
    address();//Пустой конструктор необходим для создания динамических массивов.
    address(std::string city_, std::string street_, int house_, int flat_);//Конструктор, которой инициализирует объект класса. 
    std::string get_output_address(); //Метод который берет данные у экземпляра класс и составляет нужную строку для записи в файл. 
    std::string get_city() { return city; }

private:
    std::string city;
    std::string street;
    int house;
    int flat;

};

address::address() {//Пустой конструктор необходим для создания динамических массивов.
    city = "Нет города";
    street = "Нет улицы";
    house = 0;
    flat = 0;
}

//Конструктор, которой инициализирует объект класса. 
address::address(std::string city_, std::string street_, int house_, int flat_)
{
    city = city_;
    street = street_;
    house = house_;
    flat = flat_;
}
//Метод который берет данные у экземпляра класс и составляет нужную строку для записи в файл. 
std::string address::get_output_address()
{
    return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
}


//Метод для сортировки массива с адрессами.
void sort(address* addresses, int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
        {
            std::string s1 = addresses[i].get_city();
            std::string s2 = addresses[j].get_city();

            if ( s1 > s2)
            {
                address temp = addresses[i];
                addresses[i] = addresses[j];
                addresses[j] = temp;
            }
        }
}

int main()
{

    std::ifstream f_in("in.txt");//Инициализация файла in.txt
    std::ofstream f_out("out.txt");//Инициализация файла out.txt
    if (f_in.is_open()) //Проверка на наличие файла in.txt
    {
        //Считывание и запись адрессов в массив данных класса address
        int f_arr_size; //Переменная для хранения размера массива
        f_in >> f_arr_size;
        address* arrAddress = new address[f_arr_size];
        for (int i = 0; i < f_arr_size; i++)
        {
            std::string c, s;
            int h, f;
            f_in >> c;
            f_in >> s;
            f_in >> h;
            f_in >> f;
            address point(c, s, h, f);
            arrAddress[i] = point;
        }
        sort(arrAddress, f_arr_size);

       /* for (int i = 0; i < f_arr_size; i++)
         {
             std::cout << " " << arrAddress[i].get_output_address() << std::endl;
         }*/


        if (f_out.is_open()) // Перед записью проверка на наличие файла out.txt
        {
            //Запись данных взятых из массива address в файл out.txt в обратном порядке
            f_out << f_arr_size << std::endl;
            for (int i = 0; i < f_arr_size; i++)
            {
                f_out << arrAddress[i].get_output_address() << std::endl;
            }
            f_out.close();//Закрытие файла out.txt
        }
        else //Предупреждение на случай, если файл out.txt отсутствует
        {
            std::cout << "file out.txt in not found!!! Файл out.txt не найден!!!" << std::endl;
        }

        //Очистка памяти и закрытие файлов
        delete[] arrAddress;
        f_in.close();

    }
    else //Предупреждение на случай, если файл in.txt отсутствует
    {
        std::cout << "file in.txt not found!!! Файл in.txt не найден!!!" << std::endl;
    }

    return 0;
}




