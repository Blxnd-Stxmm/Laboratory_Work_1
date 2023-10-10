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
        cout << "File opening error" << endl;  // ������ ������ �����
        return;
    }

    // ����������� ������� �����
    fin.seekg(0, ios::end); // ������� � ����� �����
    size = fin.tellg(); // �������� ������� ������� (������ �����)
    fin.seekg(0, ios::beg); // ��������� � ������ �����

    if (size <= 0)
    {
        cout << "File is empty" << endl;
        fin.close();
        return;
    }

    arr_file = new char[size + 1];

    cout << "Source text: ";

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
}