#include "Libraries.h"

int read_file()
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
        cout << "File opening error" << endl;  // ������ ������ �����
        return 1;
    }

    // ����������� ������� �����
    fin.seekg(0, ios::end); // ������� � ����� �����
    size = fin.tellg(); // �������� ������� ������� (������ �����)
    fin.seekg(0, ios::beg); // ��������� � ������ �����

    if (size <= 0)
    {
        cout << "File is empty" << endl;
        fin.close();
        return 1;
    }

    arr_file = new char[size + 1];

    while (fin.get(ch)) // ���������� ������� �� ����� � ������ char
    {
        arr_file[i] = ch;
        cout << arr_file[i];
        i++;
    }

    cout << endl << endl;

    find_two_num(size, arr_file);

    fin.close();

    delete[] arr_file;

    return 0;
}



