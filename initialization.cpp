#include "Libraries.h"

int initialization()
{
    int n = 0;
    for (;;)
    {
        cin >> n;
        cout << endl;
        // Проверка на ошибку ввода
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
            cout << "Incorrect input. Please enter a valid positive integer." << endl << endl;
        }
        else
        {
            break;
        }
    }

    return n;
}