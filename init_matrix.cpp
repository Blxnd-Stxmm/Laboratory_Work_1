#include "Libraries.h"

int** init_matrix(int cols, int rows)
{
    int** matrix = new int* [cols];     //Создание двухмерного динамического массива
    for (int i = 0; i < cols; i++)
        matrix[i] = new int[rows];

    for (int i = 0; i < rows; i++)      //Ввод значений двухмерного массива
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element with coordinates " << "[" << j << "]" << "[" << i << "]\n> ";
            matrix[j][i] = get_value();
        }
    }
    cout << "\nMatrix with " << cols << " columns and " << rows << " rows created\n";

    return matrix;
}