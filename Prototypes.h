#pragma once

// Прототип функции глобального меню

void global_menu(); // Фнукция меню для выбора задания

// Прототипы для задания 1

int product_of_odd_num(int* arr, int n); // Функция нахождения произведения чётных элементов массива

void display_prod_quantity_coordinates(int* arr, int n, int* coordinates); //Функция вывода результата первого задания

int quantity(int n); // Функция счёта кол-ва элементов

int* find_coordinates(int* arr, int n); //Функция нахождения координат

int sum_of_elements(int* arr, int n); // Функция нахождения суммы элементов массива

int* sort(int* arr, int n); // Функция сортировки массива

int initialization(); // Функция инициализации размера массива

void menu_task1(int* arr, int n); // Функция меню для выбора из функций выше

void init_Array_and_menu(); // Инициализация массива

int print_matrix(int* arr, int n); //Функция напоминания пользователю его массива

// Прототипы для задания 2

int** init_matrix(int cols, int rows); // Функция создания двумерного динамичесокго массива

int get_value(); //Функция вводаи проверки корректности значений

void menu_task2(); // Функция вызова остальных функций

int find_cols_with_0_elemets(int** matrix, int cols, int rows); //Функция нахождения столбцов с нулевым элементом

void display_cols_with_0_elemets(int* coordinates, int amount); //Функция вывода на экран результата работы функции выше

int find_row_with_longest_series(int** matrix, int cols, int rows); //Функция нахождения строк с самой длинной серией одинаковых символов

void display_maxseries_and_coordinates(int** matrix, int cols, int rows, int max_series, int max_series_count, int current_row);

void print_menu(); //Печать меню выбора задания

int print_matrix(int** matrix, int cols, int rows);//Функция напоминания пользователю его матрицы

// Пртототипы для задания 3

int read_file(); // Функция, читающая файл и вызывающая функцию ниже
char find_two_num(int size, char* m_file); // Функция нахождения двузначных чисел