#pragma once

// �������� ������� ����������� ����

void global_menu(); // ������� ���� ��� ������ �������

// ��������� ��� ������� 1

int product_of_odd_num(int* arr, int n); // ������� ���������� ������������ ������ ��������� �������

void display_prod_quantity_coordinates(int* arr, int n, int* coordinates); //������� ������ ���������� ������� �������

int quantity(int n); // ������� ����� ���-�� ���������

int* find_coordinates(int* arr, int n); //������� ���������� ���������

int sum_of_elements(int* arr, int n); // ������� ���������� ����� ��������� �������

int* sort(int* arr, int n); // ������� ���������� �������

int initialization(); // ������� ������������� ������� �������

void menu_task1(int* arr, int n); // ������� ���� ��� ������ �� ������� ����

void init_Array_and_menu(); // ������������� �������

int print_matrix(int* arr, int n); //������� ����������� ������������ ��� �������

// ��������� ��� ������� 2

int** init_matrix(int cols, int rows); // ������� �������� ���������� ������������� �������

int get_value(); //������� ������ �������� ������������ ��������

void menu_task2(); // ������� ������ ��������� �������

int find_cols_with_0_elemets(int** matrix, int cols, int rows); //������� ���������� �������� � ������� ���������

void display_cols_with_0_elemets(int* coordinates, int amount); //������� ������ �� ����� ���������� ������ ������� ����

int find_row_with_longest_series(int** matrix, int cols, int rows); //������� ���������� ����� � ����� ������� ������ ���������� ��������

void display_maxseries_and_coordinates(int** matrix, int cols, int rows, int max_series, int max_series_count, int current_row);

void print_menu(); //������ ���� ������ �������

int print_matrix(int** matrix, int cols, int rows);//������� ����������� ������������ ��� �������

// ���������� ��� ������� 3

int read_file(); // �������, �������� ���� � ���������� ������� ����
char find_two_num(int size, char* m_file); // ������� ���������� ���������� �����