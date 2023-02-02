#include <iostream>
#include <fstream>


int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream f_in("in.txt");
    std::fstream f_out("out.txt", std::ios::in | std::ios::out | std::ios::trunc); //Создаем новый файл out.txt - изменение к предыдущей версии. 
    if (f_in.is_open()) //Проверка на наличие файла in.txt
    {
        //Считывание и запись первого массива
        int f_arr_size, s_arr_size;
        f_in >> f_arr_size;
        int* fArr = new int[f_arr_size]();
        for (int i = 0; i < f_arr_size; i++)
        {
            f_in >> fArr[i];
        }
        
        //Сортировка первого массива
        int t = fArr[0]; //Присваивание переменной t значения первой ячейки массива
        for (int i = 1; i < f_arr_size; i++)
        {           
            fArr[i - 1] = fArr[i]; //Присваивание значения левой ячейки - значения из правой ячейки массива
        }
        fArr[f_arr_size-1] = t; //Присваивание последней ячейки массива значение первой ячейки

        //Считывание и запись второго массива
        f_in >> s_arr_size;
        int* sArr = new int[s_arr_size]();
        for (int i = 0; i < s_arr_size; i++)
        {
            f_in >> sArr[i];
        }

        //Сортировка второго массива
        t = sArr[s_arr_size - 1]; //Присваивание переменной t значения последней ячейки массива
        for (int i = s_arr_size - 1; i >= 1; i--)
        {
            sArr[i] = sArr[i - 1];//Присваивание значения из правой ячейки - левой ячейке массива
        }
        sArr[0] = t; //Присваивание первой ячейки массива значение последней ячейки

        if (f_out.is_open()) // Перед записью проверка на наличие файла out.txt
        {

        //Запись второго массива в файл out.txt
        f_out << s_arr_size << "\n";
        for (int i = 0; i < s_arr_size; i++)
        {
            f_out << sArr[i] << " ";
        }
        f_out << std::endl;

        //Запись первого массива в файл out.txt
        f_out << f_arr_size << "\n";
        for (int i = 0; i < f_arr_size; i++)
        {
            f_out << fArr[i] << " ";
        }
        f_out << std::endl;
        f_out.close();

        }
        else //Предупреждение на случай, если файл out.txt отсутствует
        {
            std::cout << "file out.txt in not found!!! Файл out.txt не найден!!!" << std::endl;
        }

        //Очистка памяти и закрытие файлов
        delete[] fArr;
        delete[] sArr;
        f_in.close(); 
        
    }
    else //Предупреждение на случай, если файл in.txt отсутствует
    {
        std::cout << "file in.txt not found!!! Файл in.txt не найден!!!" << std::endl;
    }
 
    return 0;
}




