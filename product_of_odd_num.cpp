#include "Libraries.h"

int product_of_odd_num(int* arr, int n)
{
    int prod1 = 0, prod2 = 1, amount = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            amount++;
            prod2 *= arr[i];
        }
    }
    if (n >= 2) // Условие для того, чтобы если в массиве 1 элемент, то произведение не было равно 1
    {
        prod1 = prod2;
    }
    else
    {
        prod1 = 0;
    }

    cout << "Product = " << prod1 << endl << "Quantity = " << amount << endl << "Coordinates is ";

    if (n == 1)
    {
        cout << "NONE" << endl; // Условие для вывода ошибки координат
    }

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl << endl;
    return 0;

}