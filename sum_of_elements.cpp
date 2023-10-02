#include "Libraries.h"

int sum_of_elements(int* arr, int n)
{
    int sum = 0, null1 = -1, null2 = -1;
    bool foundZero = false; // ���� ��� ������������ ������� ���� �� ������ �������� ��������

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (!foundZero) // ���� ��� ������ ������� �������
            {
                foundZero = true;
                null1 = i;
            }
            else // ���� ��� ������ ������� �������
            {
                null2 = i;
                if (null2 == null1 + 1)
                {
                    cout << "Sum of elements can't be found between neighboring numbers" << endl << endl;
                    return 0;
                }
                break; // ������� ��� ������� ��������, ������� �� �����
            }
        }
    }

    if (!foundZero)
    {
        cout << "Null elements are missing" << endl << endl;  // ���� ���� ������� ���������
        return 0;
    }

    if (null2 == -1) // ���� ���� ������� �������� ��������
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