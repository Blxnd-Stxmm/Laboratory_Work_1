#pragma once

// Прототип функции глобального меню

void global_menu(); // Фнукция меню для выбора задания

// Прототипы для задания 1

int product_of_odd_num(int* arr, int n); // Функция нахождения произведения чётных элементов массива

void display_prod_quantity_coordinates(int* arr, int n, int* coordinates); //Функция вывода результата первого задания

int quantity(int n); // Функция счёта кол-ва элементов

int* find_coordinates(int* arr, int n); //Функция нахождения координат

int* find_null_elements(int* arr, int n);

int calculate_sum(int* arr, int* coordinates_sum);

void print_result(int sum, int* coordinates_sum, int n);

int* sort(int* arr, int n); // Функция сортировки массива

int initialization(); // Функция инициализации размера массива

void menu_task1(int* arr, int n); // Функция меню для выбора из функций выше

void init_Array_and_menu(); // Инициализация массива

int print_array(int* arr, int n); //Функция напоминания пользователю его массива

// Прототипы для задания 2

int** init_matrix(int cols, int rows); // Функция создания двумерного динамичесокго массива

int get_value();//функция вводаи проверки корректности значений

void menu_task2(); // Функция вызова остальных функций

int find_amount_of_cols_with_0_elemets(int** matrix, int cols, int rows); //функция нахождения количества столбцов с нулевым элементом

int* find_coordinates_of_cols_with_0_elemets(int** matrix, int cols, int rows, int amount);  //функция нахождения координат столбцов с нулевым элементом

void display_cols_with_0_elements(int amount, int* coordinates);  //функция отображения координат и количества столбцов с нулевыми элементами

int find_max_series(int** matrix, int cols, int rows); //функция нахождения максимальной серии одинаковых элементов

int find_amount_of_rows(int** matrix, int cols, int rows, int max_series); //функция нахождения количества строк с самой длинной серией одинаковых элементов

void display_rows_with_max_series(int max_series, int max_series_count, int* coordinates); //функция отображения максимальной серии, количества строк с максимальной серией и координат этих строк

int* find_rows_with_max_series(int** matrix, int cols, int rows, int max_series, int max_series_count); // функция нахождения координат строк с самой длинной серией одинаковых элементов

void print_menu();//печать меню выбора задания

int print_matrix(int** matrix, int cols, int rows);//Функция напоминания пользователю его матрицы

// Пртототипы для задания 3

void read_file(); // Функция, читающая файл и вызывающая функцию ниже

char find_two_num(int size, char* m_file); // Функция нахождения двузначных чисел