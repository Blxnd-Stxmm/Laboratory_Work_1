#include "Libraries.h"

void init_Array_and_menu()
{
    cout << "Enter size of array: ";
    int size_arr = get_value();
    int* arr = new int[size_arr];
    int* sortedArr = sort(arr, size_arr);

    cout << endl;

    for (int i = 0; i < size_arr; i++)
    {
        cout << "Enter elements of array " << "[" << i << "]" << endl << "> ";
        arr[i] = initialization();
    }
    system("cls");
    cout << endl;

    print_array(arr, size_arr);
    menu_task1(arr, size_arr);

    delete[] arr;
}