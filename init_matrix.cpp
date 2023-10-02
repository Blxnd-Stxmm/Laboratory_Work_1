#include "Libraries.h"

int** init_matrix(int cols, int rows)
{
    int** matrix = new int* [rows];     //�������� ����������� ������������� �������
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    for (int i = 0; i < rows; i++)      //���� �������� ����������� �������
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element " << "[" << i << "]" << "[" << j << "]\n> ";
            matrix[i][j] = get_value();
        }
    }

    system("cls");

    cout << "\nMatrix with " << cols << " columns and " << rows << " rows created\n";

    return matrix;
}