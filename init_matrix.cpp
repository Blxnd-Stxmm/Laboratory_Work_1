#include "Libraries.h"

int** init_matrix(int cols, int rows)
{
    int** matrix = new int* [rows];     //Создание двухмерного динамического массива
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    for (int i = 0; i < rows; i++)      //Ввод значений двухмерного массива
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element " << "[" << i << "]" << "[" << j << "]\n> ";
            matrix[i][j] = initialization();
        }
    }

    system("cls");

    cout << "Matrix with " << cols << " columns and " << rows << " rows created\n" << endl;
    print_matrix(matrix, cols, rows);
    cout << endl;

    return matrix;
}