#include "Libraries.h"

int product_of_odd_num(int* arr, int n)
{
    int prod = 1;

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            prod *= arr[i];
        }
    }
    if (n >= 2) // Условие для того, чтобы если в массиве 1 элемент, то произведение не было равно 1
    {
        prod = prod;
    }
    else
    {
        prod = 0;
    }
    
    return prod;
}

int quantity(int n)
{
    int quantity = 0;
    
    if (n % 2 == 0)
    {
        quantity = n / 2;
    }
    else
    {
        quantity = (n - 1) / 2;
    }
    
    return quantity;
}

int* find_coordinates(int* arr, int n)
{
    int* coordinates;
    int index = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            count++;
        }
    }

    coordinates = new int[count];

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            coordinates[index] = arr[i];
            index++;
        }
    }

    return coordinates;
}