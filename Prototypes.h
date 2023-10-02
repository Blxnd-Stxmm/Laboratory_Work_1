#pragma once

// Прототип функции глобального меню

void global_menu(); // Фнукция меню для выбора задания

// Прототипы для задания 1

int product_of_odd_num(int* arr, int n); // Функция нахождения произведения чётных элементов массива

int sum_of_elements(int* arr, int n); // Функция нахождения суммы элементов массива

int* sort(int* arr, int n); // Функция сортировки массива

int initialization(); // Функция инициализации размера массива

void menu_task1(int* arr, int n); // Функция меню для выбора из функций выше

int init_Array_and_menu(); // Инициализация массива

// Прототипы для задания 2

int** init_matrix(int cols, int rows); // Функция создания двумерного динамичесокго массива

int get_value();//функция вводаи проверки корректности значений

void menu_task2(); // Функция вызова остальных функций

bool find_cols_with_0_elemets(int** matrix, int cols, int rows);//функция нахождения столбцов с нулевым элементом

bool find_row_with_longest_series(int** matrix, int cols, int rows); //функция нахождения строк с самой длинной серией одинаковых символов

void print_menu();//печать меню выбора задания

// Пртототипы для задания 3

int read_file(); // Функция, читающая файл и вызывающая функцию ниже
char find_two_num(int size, char* m_file); // Функция нахождения двузначных чисел