#include "Libraries.h"

void menu_task1(int* arr, int n)
{
    int* sortedArr = NULL;
    char choice;
    int* coordinates;
    int* coordinates_sum;
    int sum = 0;

    while (true) // Бесконечный цикл, использующий конструкцию switch case для выбора операции
    {
        cout << "Please choose what do you want" << endl << endl << "1 - Product of odd numbers" << endl << "2 - Summ of elements of array" << endl << "3 - Sort of array" << endl << "0 - Exit" << endl << endl;
        cout << "> ";
        cin >> choice;

        cout << endl;
        system("cls");

        print_array(arr, n);

        switch (choice)
        {
        case '1':
            coordinates = find_coordinates(arr, n);
            display_prod_quantity_coordinates(arr, n, coordinates);
            delete[] coordinates;
            break;
        case '2':
            coordinates_sum = find_null_elements(arr, n);
            sum = calculate_sum(arr, coordinates_sum);
            print_result(sum, coordinates_sum, n);
            delete[] coordinates_sum;
            break;
        case '3':
            sortedArr = sort(arr, n);

            cout << "Sorted array: ";
            for (int i = 0; i < n; i++)
            {
                cout << "[" << sortedArr[i] << "]" << " ";
            }
            cout << endl << endl;
            delete[] sortedArr;
            break;
        case '0':
            system("cls");
            return;
        default:
            cout << "Invalid choice. Try again." << endl << endl;
        }
    }
}

int* sort(int* arr, int n)
{
        int coutner = 0;
        int* arr2 = new int[n];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                arr2[coutner] = arr[i];
                coutner++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                arr2[coutner] = arr[i];
                coutner++;
            }
        }
        return arr2;
}