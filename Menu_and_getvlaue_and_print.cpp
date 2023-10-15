#include "Libraries.h"

void menu_task2()
{
    int cols = 0, rows = 0;
    int** matrix = NULL;
    int amount = 0;
    int* coordinates = NULL;;
    int max_series = 0, max_series_count = 0;

    cout << "Enter the number of rows and columns:";    //Ввод и проверка на корректность размерности матрицы
    cout << endl << "Rows: ";
    rows = get_value();
    cout << "Columns: ";
    cols = get_value();
    cout << endl;

    matrix = init_matrix(cols, rows);

    char variant;
    while (true)
    {
        print_menu();       //Меню выбора
        cin >> variant;

        cout << endl;

        system("cls");
        
        switch (variant)
        {
        case '1':
            system("cls");
            cout << "Original matrix:\n" << endl;
            print_matrix(matrix, cols, rows);
            amount = find_amount_of_cols_with_0_elemets(matrix, cols, rows);
            coordinates = find_coordinates_of_cols_with_0_elemets(matrix, cols, rows, amount);
            display_cols_with_0_elements(amount, coordinates);
            delete[] coordinates;
            break;
        case '2':
            system("cls");
            cout << "Original matrix:\n" << endl;
            print_matrix(matrix, cols, rows);
            max_series = find_max_series(matrix, cols, rows);
            max_series_count = find_amount_of_rows(matrix, cols, rows, max_series);
            coordinates = find_rows_with_max_series(matrix, cols, rows, max_series, max_series_count);
            display_rows_with_max_series(max_series, max_series_count, coordinates);
            delete[] coordinates;
            break;
        case '0':
            system("cls");
            return;
        default:
            cout << "Invalid choice. Try again." << endl << endl;
        }
    }

    for (int i = 0; i < cols; i++)
        delete matrix[i];
    delete[] matrix;
}

int get_value()
{
    int value;

    for (;;)
    {
        cin >> value;
        if (cin.fail() || value <=0 || (cin.get() != '\n'))      //условия корректности введённых значений
        {
            cin.clear();
            cin.ignore();
            cout << "Incorrect input, try again\n> ";
        }
        else
        {
            break;
        }
    }
    return value;
}

