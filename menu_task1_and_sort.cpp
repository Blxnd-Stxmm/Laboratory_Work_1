#include "Libraries.h"

void menu_task1(int* arr, int n)
{
    int* sortedArr;
    char choice;
    int* coordinates;

    while (true) // ����������� ����, ������������ ����������� switch case ��� ������ ��������
    {
        cout << "Please choose what do you want" << endl << endl << "1 - Product of odd numbers" << endl << "2 - Summ of elements of array" << endl << "3 - Sort of array" << endl << "0 - Exit" << endl << endl;
        cout << "> ";
        cin >> choice;

        cout << endl;
        system("cls");

        print_matrix(arr, n);

        switch (choice)
        {
        case '1':
            coordinates = find_coordinates(arr, n);
            display_prod_quantity_coordinates(arr, n, coordinates);
            delete[] coordinates;
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