#pragma once

// �������� ������� ����������� ����

void global_menu(); // ������� ���� ��� ������ �������

// ��������� ��� ������� 1

int product_of_odd_num(int* arr, int n); // ������� ���������� ������������ ������ ��������� �������

int sum_of_elements(int* arr, int n); // ������� ���������� ����� ��������� �������

int* sort(int* arr, int n); // ������� ���������� �������

int initialization(); // ������� ������������� ������� �������

void menu_task1(int* arr, int n); // ������� ���� ��� ������ �� ������� ����

int init_Array_and_menu(); // ������������� �������

// ��������� ��� ������� 2

int** init_matrix(int cols, int rows); // ������� �������� ���������� ������������� �������

int get_value();//������� ������ �������� ������������ ��������

void menu_task2(); // ������� ������ ��������� �������

bool find_cols_with_0_elemets(int** matrix, int cols, int rows);//������� ���������� �������� � ������� ���������

bool find_row_with_longest_series(int** matrix, int cols, int rows); //������� ���������� ����� � ����� ������� ������ ���������� ��������

void print_menu();//������ ���� ������ �������

// ���������� ��� ������� 3

int read_file(); // �������, �������� ���� � ���������� ������� ����
char find_two_num(int size, char* m_file); // ������� ���������� ���������� �����