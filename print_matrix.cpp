#include "Libraries.h"

int print_matrix(int** matrix, int cols, int rows)
{
    for (int i = 0; i < rows; i++)      //���� �������� ����������� �������
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "[" << matrix[i][j] << "]" << " ";
        }
        cout << endl;
    }
    return 0;
}
