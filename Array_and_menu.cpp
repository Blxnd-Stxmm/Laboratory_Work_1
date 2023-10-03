#include "Libraries.h"

int init_Array_and_menu()
{
    cout << "Enter size of array: ";
    int size_arr = initialization();
    int* arr = new int[size_arr];
    int* sortedArr = sort(arr, size_arr);

    cout << "Enter elements of array" << endl << endl;

    for (int i = 0; i < size_arr; i++)
    {
        cout << "Enter elements of array " << "[" << i << "]" << endl << "> ";
        arr[i] = get_value();
    }
    system("cls");
    cout << endl;

    menu_task1(arr, size_arr);

    delete[] arr;
    return 0;
}