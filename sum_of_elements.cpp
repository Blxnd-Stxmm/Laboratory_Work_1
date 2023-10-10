#include "Libraries.h"

int* find_null_elements(int* arr, int n)
{
    int* coordinates = new int[2];
    coordinates[0] = -1;
    coordinates[1] = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            coordinates[0] = i;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            coordinates[1] = i;
            break;
        }
    }

    return coordinates;
}

int calculate_sum(int* arr, int* coordinates_sum)
{
    int sum = 0;

    for (int i = coordinates_sum[0] + 1; i < coordinates_sum[1]; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void print_result(int sum, int* coordinates_sum, int n)
{
    if (n == 1)
    {
        cout << "Sum of elements can't be found between 1 element " << endl << endl;
        return;
    }

    if (coordinates_sum[1] == coordinates_sum[0] + 1)
    {
        cout << "Sum of elements can't be found between neighboring numbers" << endl << endl;
        return;
    }

    if (coordinates_sum[0] == -1 && coordinates_sum[1] == -1)
    {
        cout << "Null elements are missing" << endl << endl;
        return;
    }

    if (coordinates_sum[1] == coordinates_sum[0])
    {
        cout << "The operation was not performed because the second null element is missing" << endl << endl;
        return;
    }

    cout << "Sum of elements = " << sum << endl << endl;

    if (coordinates_sum[0] != -1 && coordinates_sum[1] != -1)
    {
        cout << "Position null elements: " << coordinates_sum[0] << " " << coordinates_sum[1] << endl << endl;
    }
}

