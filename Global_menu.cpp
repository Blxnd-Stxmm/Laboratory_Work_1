#include "Libraries.h"

void global_menu()
{
    char choice;

    while (true)   // Бесконечный цикл, использующий конструкцию switch case для выбора задания
    {
        system("cls");
        cout << "Hello, it's first laboratory work" << endl << "Please choose task" << endl << endl << "1 - Array" << endl << "2 - Matrix" << endl << "3 - File" << endl << "0 - Exit" << endl << endl;
        cout << "> ";
        cin >> choice;
        cout << endl;
        
        system("cls");
        switch (choice)
        {
        case '1':
            init_Array_and_menu();
            break;
        case '2':
            menu_task2();
            break;
        case '3':
            read_file();
            break;
        case '0':
            return;
        default:
            cout << "Invalid choice. Try again." << endl << endl;
        }
    }
}