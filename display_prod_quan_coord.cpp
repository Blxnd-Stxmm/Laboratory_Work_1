#include "Libraries.h"

void display_prod_quantity_coordinates(int* arr, int n, int* coordinates)
{
    int product = product_of_odd_num(arr, n);
    int quant = quantity(n);

    if (n != 1)
    {
        cout << "Product = " << product << endl << "Quantity = " << quant << endl << "Coordinates is ";

        for (int i = 0; i < quantity(n); i++)
        {
            cout << coordinates[i] << " ";
        }
        cout << endl << endl;
    }
    else
    {
        cout << "Product = " << product << endl << "Quantity = " << quant << endl << "Coordinates is NONE " << endl << endl;
    }
}