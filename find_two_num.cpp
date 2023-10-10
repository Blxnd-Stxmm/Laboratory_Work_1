#include "Libraries.h"

char find_two_num(int size, char* arr_file)
{
    bool isInsideTwoDigitNumber = false; // ����, �����������, ��� �� ��������� ������ ����������� �����
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
                currentNumber = currentNumber * 10 + digit; // �������� ���������� ����� �� ����
            }
            else
            {
                currentNumber = digit; // �������� ����� �����
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
            isInsideTwoDigitNumber = false; // ���������� ���� ��� ���������� �������
        }
        else
        {
            isInsideTwoDigitNumber = false; // ���������� ���� ��� ���������� ������ ������� �������
        }
    }

    if (havenum == false)
    {
        cout << "Not two-digit numbers" << endl;
    }

    cout << endl;

    return 0;
}