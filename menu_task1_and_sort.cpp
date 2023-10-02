#include "Libraries.h"

void menu_task1(int* arr, int n)
{
    int* sortedArr;
    char choice;

    while (true) // Бесконечный цикл, использующий конструкцию switch case для выбора операции
    {
        cout << "Please choose what do you want" << endl << "1 - Product of odd numbers" << endl << "2 - Summ of elements of array" << endl << "3 - Sort of array" << endl << "0 - Exit" << endl << endl;;
        cin >> choice;

        cout << endl;
        system("cls");

        switch (choice)
        {
        case '1':
            product_of_odd_num(arr, n);
            break;
        case '2':
            sum_of_elements(arr, n);
            break;
        case '3':
            sortedArr = sort(arr, n);

            cout << "Sorted array: ";
            for (int i = 0; i < n; i++)
            {
                cout << sortedArr[i] << " ";
            }
            cout << endl;
            delete[] sortedArr;
            break;
        case '0':
            return;
        default:
            cout << "Invalid choice. Try again." << endl;
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