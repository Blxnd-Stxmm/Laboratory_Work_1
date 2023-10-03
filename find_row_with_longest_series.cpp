#include "Libraries.h"

int find_row_with_longest_series(int** matrix, int cols, int rows)
{
    int max_series = 1;
    int max_series_count = 0;
    int current_series = 1;
    int current_row = 0;

    for (int i = 0; i < rows; i++)
    {
        current_series = 1;     // ���������� ������� ������� ����� ��� ����� ������

        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1])   // ���� ������� ����� ��������� ������������
            {
                current_series++;

                if (current_series > max_series && i != current_row)
                {
                    max_series = current_series;
                    max_series_count = 1;   // ���������� ������� ����� � ������������ ������
                    current_row = i;    // ���������� ����� ������� ������
                }
                else if (current_series == max_series)     // ���� ������� ����� ����� ������������, ����������� ������� ����� � ������������ ������
                {
                    max_series_count++;
                }
            }
            else
                current_series = 1;     // ���������� ������� �����
        }
    }

    display_maxseries_and_coordinates(matrix, cols, rows, max_series, max_series_count, current_row);

    return 0;
}

void display_maxseries_and_coordinates(int** matrix, int cols, int rows, int max_series, int max_series_count, int current_row)
{
    int current_series = 1;

    if (max_series == 1)
    {
        cout << "There is no rows with series of identical elements in this matrix\n";
    }
    else
    {
        cout << "Max series length: " << max_series << endl;
        cout << "Number of rows with max series: " << max_series_count << endl;
        cout << "Rows with max series: ";

        cout << current_row << " ";
        for (int i = 0; i < rows; i++)      // ������� ������ ����� � ������������ ������
        {
            current_series = 1;

            for (int j = 0; j < cols - 1; j++)
            {
                if (matrix[i][j] == matrix[i][j + 1])
                {
                    current_series++;
                    if (current_series == max_series && i != current_row)
                    {
                        cout << i << " ";
                        break;
                    }
                }
                else
                {
                    current_series = 1;
                }
            }
        }
        cout << endl;
    }
}