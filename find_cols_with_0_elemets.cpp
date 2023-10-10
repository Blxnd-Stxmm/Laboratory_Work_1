#include "Libraries.h"

int find_amount_of_cols_with_0_elemets(int** matrix, int cols, int rows)
{
    int amount = 0;     //���������� �����

    for (int j = 0; j < cols; j++)      //����� ���������� �����
    {
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][j] == 0)
            {
                amount++;
                break;
            }
        }
    }

    return amount;
}

int* find_coordinates_of_cols_with_0_elemets(int** matrix, int cols, int rows, int amount)
{
    int* coordinates = new int[amount];   //���������� �����
    int count = 0;

    if (amount == 0)
    {
        return NULL;
    }

    for (int j = 0; j < cols; j++)      //����� ���������� � ��������� �����
    {
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][j] == 0 && count < amount)
            {
                coordinates[count] = j;
                count++;
                break;
            }
        }
    }

    return coordinates;
}

