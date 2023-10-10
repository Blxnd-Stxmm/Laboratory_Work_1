#pragma once

// �������� ������� ����������� ����

void global_menu(); // ������� ���� ��� ������ �������

// ��������� ��� ������� 1

int product_of_odd_num(int* arr, int n); // ������� ���������� ������������ ������ ��������� �������

void display_prod_quantity_coordinates(int* arr, int n, int* coordinates); //������� ������ ���������� ������� �������

int quantity(int n); // ������� ����� ���-�� ���������

int* find_coordinates(int* arr, int n); //������� ���������� ���������

int* find_null_elements(int* arr, int n);

int calculate_sum(int* arr, int* coordinates_sum);

void print_result(int sum, int* coordinates_sum, int n);

int* sort(int* arr, int n); // ������� ���������� �������

int initialization(); // ������� ������������� ������� �������

void menu_task1(int* arr, int n); // ������� ���� ��� ������ �� ������� ����

void init_Array_and_menu(); // ������������� �������

int print_array(int* arr, int n); //������� ����������� ������������ ��� �������

// ��������� ��� ������� 2

int** init_matrix(int cols, int rows); // ������� �������� ���������� ������������� �������

int get_value();//������� ������ �������� ������������ ��������

void menu_task2(); // ������� ������ ��������� �������

int find_amount_of_cols_with_0_elemets(int** matrix, int cols, int rows); //������� ���������� ���������� �������� � ������� ���������

int* find_coordinates_of_cols_with_0_elemets(int** matrix, int cols, int rows, int amount);  //������� ���������� ��������� �������� � ������� ���������

void display_cols_with_0_elements(int amount, int* coordinates);  //������� ����������� ��������� � ���������� �������� � �������� ����������

int find_max_series(int** matrix, int cols, int rows); //������� ���������� ������������ ����� ���������� ���������

int find_amount_of_rows(int** matrix, int cols, int rows, int max_series); //������� ���������� ���������� ����� � ����� ������� ������ ���������� ���������

void display_rows_with_max_series(int max_series, int max_series_count, int* coordinates); //������� ����������� ������������ �����, ���������� ����� � ������������ ������ � ��������� ���� �����

int* find_rows_with_max_series(int** matrix, int cols, int rows, int max_series, int max_series_count); // ������� ���������� ��������� ����� � ����� ������� ������ ���������� ���������

void print_menu();//������ ���� ������ �������

int print_matrix(int** matrix, int cols, int rows);//������� ����������� ������������ ��� �������

// ���������� ��� ������� 3

void read_file(); // �������, �������� ���� � ���������� ������� ����

char find_two_num(int size, char* m_file); // ������� ���������� ���������� �����