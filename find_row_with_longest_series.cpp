#include "Libraries.h"

bool find_row_with_longest_series(int** matrix, int cols, int rows)
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
            if (matrix[j][i] == matrix[j + 1][i])   // ���� ������� ����� ��������� ������������
            {
                current_series++;

                if (current_series > max_series)
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

    if (max_series == 1)
    {
        cout << "There is no rows with series of identical elements in this matrix\n";
        return false;
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
                if (matrix[j][i] == matrix[j + 1][i])
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
        return true;
    }
}
