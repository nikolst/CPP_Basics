/*Да се прочете квадратна матрица от цели числа и да се определи дали тя е симетрична.
Максималната размерност на матрицата е 100х100. Припомняме, че една матрица е симетрична, 
ако за всеки неин елемент е вярно, че ако елементът се намира на позиция (i, j), 
то той е равен по стойност на елемента на позиция (j, i)*/

#include<iostream>
using namespace std;
int main()
{
    int matrix[100][100], rows;
    int temp = 0;
    cout << "Enter rows/cols of the square matrix: ";
    cin >> rows;

    //въвеждане на числата в масива
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    //извеждане на числата от масива
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << matrix[i][j] << " ";
           
        }
        cout << "\n";
    }
    cout << "\n\n";

    //проверяваме дали матрицата е симетрична
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                cout<<"Matrix is NOT symmetric matrix!" << endl;
                return 0;
            }
        }
    }
    cout<<"Matrix is symmetric!" << endl;;
    return 0;
}
