#include "Libraries.h"

int find_max_series(int** matrix, int cols, int rows)
{
    int max_series = 1;
    int current_series = 1;

    for (int i = 0; i < rows; i++)
    {
        current_series = 1;     // Сбрасываем счетчик текущей серии для новой строки
        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1])   // Если текущая серия превышает максимальную
            {
                current_series++;
                if (current_series > max_series)
                {
                    max_series = current_series;
                }
            }
            else
                current_series = 1;     // Сбрасываем счетчик серии
        }
    }

    return max_series;
}

int find_amount_of_rows(int** matrix, int cols, int rows, int max_series)
{
    int max_series_count = 0;
    int current_series = 1;

    if (max_series == 1)
    {
        return 0;
    }
    for (int i = 0; i < rows; i++)
    {
        current_series = 1;     // Сбрасываем счетчик текущей серии для новой строки
        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1])   // Если текущая серия превышает максимальную
            {
                current_series++;
                if (current_series == max_series)
                {
                    max_series_count++;
                }
            }
            else
                current_series = 1;     // Сбрасываем счетчик серии
        }
    }

    return max_series_count;
}

int* find_rows_with_max_series(int** matrix, int cols, int rows, int max_series, int max_series_count)
{
    int* coordinates = new int[max_series_count];
    int current_series = 1;
    int count = 0;

    if (max_series_count == 0)
    {
        return NULL;
    }
    for (int i = 0; i < rows; i++)
    {
        current_series = 1;     // Сбрасываем счетчик текущей серии для новой строки
        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1])   // Если текущая серия превышает максимальную
            {
                current_series++;
                if (current_series == max_series)
                {
                    coordinates[count] = i;
                    count++;
                }
            }
            else
                current_series = 1;     // Сбрасываем счетчик серии
        }
    }

    return coordinates;
}

