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
        if (!(cin >> inputValue)) // Попробовать считать ввод как целое число
        {
            cout << "Error: Please enter a valid integer, retry" << endl;
            delete[] arr;
            return 0;
        }

        // Если введенное значение не было допустимым целым числом, вывести ошибку
        if (cin.fail())
        {
            cin.clear(); // Сбросить флаг ошибки ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистить буфер ввода
            cout << "Error: Please enter a valid integer, retry" << endl;
            delete[] arr;
            return 0;
        }

        // Сохранить введенное значение в массиве
        arr[i] = inputValue;
    }
    system("cls");
    cout << endl;

    menu_task1(arr, size_arr);

    delete[] arr;
    return 0;
}