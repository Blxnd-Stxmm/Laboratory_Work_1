#include "Libraries.h"

int print_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)      //���� �������� ����������� �������
    {
        cout << "[" << arr[i] << "]" << " ";
    }

    cout << endl << endl;

    return 0;
}