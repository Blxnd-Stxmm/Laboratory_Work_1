#include "Libraries.h"

void menu_task2()
{
    int cols = 0, rows = 0;

    cout << "Enter the number of rows and columns:" << endl;    //Ввод и проверка на корректность размерности матрицы
    cout << "Rows: ";
    rows = get_value();
    cout << "Columns: ";
    cols = get_value();
    cout << endl;

    int** matrix = init_matrix(cols, rows);

    char variant;
    
    while(true)
    {
        print_menu();       //Меню выбора

        cin >> variant;
        cout << endl;

        system("cls");

        switch (variant)
        {
        case '1':
            find_cols_with_0_elemets(matrix, cols, rows);
            break;
        case '2':
            find_row_with_longest_series(matrix, cols, rows);
            break;
        case '3':
            print_matrix(matrix, cols,  rows);
            break;
        case '0':
            return;
        default:
            cout << "Invalid choice. Try again." << endl << endl;
        }
    } 

    for (int i = 0; i < cols; i++)
        delete matrix[i];
    delete[] matrix;

    return;
}

int get_value()
{
    int value;

    for (;;)
    {
        cin >> value;
        if (cin.fail() || (value < 0) || (cin.get() != '\n'))      //условия корректности введённых значений
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

void print_menu()       //Печать меню программы
{
    cout << "\nPlease, choose what do you want to do:\n1. Find the number of columns containing at least one zero element and their coordinates\n2. Find the number of the row containing the longest series of identical elements and the number of such lines\n3. Print Matrix\n0. Exit.\n> ";
}
