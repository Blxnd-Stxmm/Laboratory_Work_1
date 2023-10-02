#include "Libraries.h"

int init_Array_and_menu()
{
    int size_arr = initialization();
    int* arr = new int[size_arr];
    int* sortedArr = sort(arr, size_arr);

    cout << "Enter elements of array" << endl << endl;

    for (int i = 0; i < size_arr; i++)
    {
        int inputValue;
        if (!(cin >> inputValue)) // ����������� ������� ���� ��� ����� �����
        {
            cout << "Error: Please enter a valid integer, retry" << endl;
            delete[] arr;
            return 0;
        }

        // ���� ��������� �������� �� ���� ���������� ����� ������, ������� ������
        if (cin.fail())
        {
            cin.clear(); // �������� ���� ������ �����
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // �������� ����� �����
            cout << "Error: Please enter a valid integer, retry" << endl;
            delete[] arr;
            return 0;
        }

        // ��������� ��������� �������� � �������
        arr[i] = inputValue;
    }
    system("cls");
    cout << endl;

    menu_task1(arr, size_arr);

    delete[] arr;
    return 0;
}