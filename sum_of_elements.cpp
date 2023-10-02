#include "Libraries.h"

int sum_of_elements(int* arr, int n)
{
    int sum = 0, null1 = -1, null2 = -1;
    bool foundZero = false; // Флаг для отслеживания наличия хотя бы одного нулевого элемента

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (!foundZero) // Если это первый нулевой элемент
            {
                foundZero = true;
                null1 = i;
            }
            else // Если это второй нулевой элемент
            {
                null2 = i;
                if (null2 == null1 + 1)
                {
                    cout << "Sum of elements can't be found between neighboring numbers" << endl << endl;
                    return 0;
                }
                break; // Найдены оба нулевых элемента, выходим из цикла
            }
        }
    }

    if (!foundZero)
    {
        cout << "Null elements are missing" << endl << endl;  // Если нету нулевых элементов
        return 0;
    }

    if (null2 == -1) // Если нету второго нулевого элемента
    {
        cout << "The operation was not performed because the second null element is missing" << endl << endl;
        return 0;
    }

    for (int i = null1 + 1; i < null2; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of elements = " << sum << endl << endl;
    return 0;
}