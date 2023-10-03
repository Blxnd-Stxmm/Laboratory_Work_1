#include "Libraries.h"

int find_cols_with_0_elemets(int** matrix, int cols, int rows)
{
    int amount = 0;     //���������� �����
    int* coordinates = new int[cols];   
    
    for (int j = 0; j < cols; j++) 
    {
        bool foundZero = false; // ����, �����������, ��� �� ������ ���� �� ���� ���� � ������� �������

        for (int i = 0; i < rows; i++) 
        {
            if (matrix[i][j] == 0) 
            {
                coordinates[amount] = j;
                foundZero = true;
                break; // ���� ������ ���� �� ���� ����, ������� �� ����� �� �������
            }
        }

        if (foundZero) 
        {
            amount++; // ����������� ������� ������� � �����
        }
    }

    display_cols_with_0_elemets(coordinates, amount);

    return 0;
}

void display_cols_with_0_elemets(int* coordinates, int amount)
{
    if (amount == 0)
    {
        cout << "There is no zero elements in matrix, the amount "
            << " and the coordinates of columns can't be find.\n"; //����������� �� ���������� �������� � �������� ����������
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
    return;
}