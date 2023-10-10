#include "Libraries.h"

void read_file()
{
    char task3_file[] = "task3_file.txt";
    char* arr_file = NULL;
    char ch;
    int size;
    int i = 0;

    ifstream fin;
    fin.open(task3_file);

    if (!fin.is_open())
    {
        cout << "File opening error" << endl;  // Ошибка чтения файла
        return;
    }

    // Определение размера файла
    fin.seekg(0, ios::end); // Перейти в конец файла
    size = fin.tellg(); // Получить текущую позицию (размер файла)
    fin.seekg(0, ios::beg); // Вернуться в начало файла

    if (size <= 0)
    {
        cout << "File is empty" << endl;
        fin.close();
        return;
    }

    arr_file = new char[size + 1];

    cout << "Source text: ";

    while (fin.get(ch)) // Перегоняем символы из файла в массив char
    {
        arr_file[i] = ch;
        cout << arr_file[i];
        i++;
    }

    cout << endl << endl;
    
    find_two_num(size, arr_file);

    fin.close();

    delete[] arr_file;
}