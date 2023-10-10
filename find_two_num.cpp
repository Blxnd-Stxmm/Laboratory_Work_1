#include "Libraries.h"

char find_two_num(int size, char* arr_file)
{
    bool isInsideTwoDigitNumber = false; // Флаг, указывающий, что мы находимся внутри двузначного числа
    int currentNumber = 0;
    int digit = 0;
    bool havenum = false;

    for (int i = 0; i < size; i++)
    {
        if (isdigit(arr_file[i]))
        {
            digit = arr_file[i] - '0';

            if (isInsideTwoDigitNumber)
            {
                currentNumber = currentNumber * 10 + digit; // Собираем двузначное число из цифр
            }
            else
            {
                currentNumber = digit; // Начинаем новое число
                isInsideTwoDigitNumber = true;
            }
        }
        else if (isspace(arr_file[i]) && isInsideTwoDigitNumber)
        {
            if (currentNumber >= 10 && currentNumber <= 99)
            {
                cout << "Two-digit number: " << currentNumber << endl;
                havenum = true;
            }
            isInsideTwoDigitNumber = false; // Сбрасываем флаг при нахождении пробела
        }
        else
        {
            isInsideTwoDigitNumber = false; // Сбрасываем флаг при нахождении любого другого символа
        }
    }

    if (havenum == false)
    {
        cout << "Not two-digit numbers" << endl;
    }

    cout << endl;

    return 0;
}