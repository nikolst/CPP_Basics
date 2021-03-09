/*Да се напише програма, която въвежда квадратна матрица с максимален брой елементи 100х100.
a)Да се изведат елементите по главния и второстепенния диагонал
b)Да се изведат елементите над главния диагонал
c)Да се изведат елементите под главния диагонал*/

#include <iostream>
using namespace std;
int main()
{
    int matrix[100][100], rowscols;

    cout << "Enter the rows/columns of the square matrix: ";
    cin >> rowscols;

    //въвеждаме елементите в квадратната матрица
    for (int i = 0; i < rowscols; i++)
    {
        for (int j = 0; j < rowscols; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    //извеждаме елементите на квадратната матрица
    for (int i = 0; i < rowscols; i++)
    {
        for (int j = 0; j < rowscols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    //a) елементите по главния диагонал
    cout << "The elements from the main diagonal are: ";
    for(int i = 0; i < rowscols; i++)
    {
        for(int j = 0; j < rowscols; j++)
        {
            if(i == j)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;

    //елементите по второстепенния диагонал
    cout << "The elements from the second diagonal are: ";
    for(int j = rowscols - 1; j >= 0; j--)
    {
        cout << matrix[rowscols - j - 1][j] << " ";
    }

    cout << endl;

    //b) извеждаме елентите над главния диагонал
    cout << "The elements above the main diagonal are: ";
    for(int i = 0; i < rowscols - 1; i++)
    {
        for(int j = i + 1; j < rowscols; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    cout << endl;

    //c) извеждаме елементите под главния диагонал
    cout << "The elements under the main diagonal are: ";
    for(int i = 1; i < rowscols; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    cout << endl;


    return 0;
}
