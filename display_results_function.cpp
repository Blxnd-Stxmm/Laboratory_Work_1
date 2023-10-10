#include "Libraries.h"

void display_cols_with_0_elements(int amount, int* coordinates)
{
    if (amount == 0)
    {
        cout << endl << "There is no zero elements in matrix, the amount "
            << " and the coordinates of columns can't be find.\n" << endl; //уведомление об отсутствии столбцов с нулевыми элементами
    }
    else
    {
        cout << endl << "Amount of columns with at least one zero element: "
            << amount << endl << "Coordinates of columns with at least one zero element: ";
        for (int i = 0; i < amount; i++)
        {
            cout << coordinates[i] << " ";
        }
        cout << endl << endl;
    }
}

void display_rows_with_max_series(int max_series, int max_series_count, int* coordinates)
{
    if (max_series == 1)
    {
        cout << endl << "There is no rows with series of identical elements in this matrix\n" << endl;
    }
    else
    {
        cout << endl << "Max series length: " << max_series << endl;
        cout << "Number of rows with max series: " << max_series_count << endl;
        cout << "Rows with max series: ";
        for (int i = 0; i < max_series_count; i++)
        {
            cout << coordinates[i] << " ";
        }
        cout << endl << endl;
    }
}

void print_menu()       //ѕечать меню программы
{
    cout << "Please, choose what do you want to do:\n1 - Find the number of columns containing at least one zero element and their coordinates\n2 - Find the number of the row containing the longest series of identical elements and the number of such lines\n0 - Exit.\n> ";
}

int print_matrix(int** matrix, int cols, int rows)
{
    for (int i = 0; i < rows; i++)      //¬вод значений двухмерного массива
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "[" << matrix[i][j] << "]" << " ";
        }
        cout << endl;
    }
    return 0;
}