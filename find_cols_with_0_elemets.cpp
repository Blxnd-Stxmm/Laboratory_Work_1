#include "Libraries.h"

bool find_cols_with_0_elemets(int** matrix, int cols, int rows)
{
    int amount = 0;     //���������� �����
    int* coordinates = new int[cols];   //���������� �����
    
    for (int i = 0; i < cols; i++)      //����� ���������� � ��������� �����
    {
        for (int j = 0; j < rows; j++)
        {
            if (matrix[i][j] == 0)
            {
                coordinates[amount] = i;
                amount++;
                break;
            }
        }
    }

    if (amount == 0)
    {
        cout << "There is no zero elements in matrix, the amount "
            << " and the coordinates of columns can't be find.\n"; //����������� �� ���������� �������� � �������� ����������
        return false;
    }
    else
    {
        cout << "Amount of columns with at least one zero element: " 
            << amount << endl << "Coordinates of columns with at least one zero element: ";
        for (int i = 0; i < amount; i++)
        {
            cout << coordinates[i] << " ";
        }
        cout << endl;
    }

    delete[] coordinates;

    return true;
}