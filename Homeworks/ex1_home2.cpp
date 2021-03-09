#include <iostream>
using namespace std;
int main()
{
    int egn[20]; //масив, който съдържа последните 4 цифри от ЕГН-тата
    int matrix[100][100]; //матрицата, която ще служи за извеждане на числата от масива
    int rows, cols; //редове и колони на матрицата
    int n; //броя ЕГН, които ще въведем
    int arr_count[100]; //матрица, която да съхранява числата от проверката на колоните на матрицата

    cout << "Enter the number of identification numbers: ";
    cin >> n;

    cout << "Enter the rows of the matrix: ";
    cin >> rows;

    cout << "Enter the columns of the matrix: ";
    cin >> cols;

    cout << endl;

    //въвеждаме последните 4 цифри от ЕГН-тата
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the egn: ";
        cin >> egn[i];
        if (egn[i] < 1000 || egn[i] > 9999)
            break;
    }

    cout << endl;

    //извеждаме числата от масива под формата на матрица
    int k = 0;
    for (int m = 0; m < rows; m++)
    {
        for (int p = 0; p < cols; p++)
        {
            matrix[m][p] = egn[k];
            if (matrix[m][p] != 0)
            {
                //алгоритъм за сравнение на числата във всяка колона
                for (int t = 0; t < cols - 1; t++)
                {
                    for (int s = t + 1; t < cols; t++)
                    {
                        if (matrix[t][p] == matrix[s][p])
                        {
                            arr_count[t] = 1;
                        }
                        else
                        {
                            arr_count[t] = 0;
                        }
                    }
                }
                cout << matrix[m][p] << " ";
                ++k;
            }
            else
            {
                cout << "0000"
                     << " "; //добавяме 0000, когато липсва число
            }
        }
        cout << "\n";
    }
    //отпечатваме последния ред, който прави проверката по колони
    for (int z = 0; z < cols; z++)
    {
        cout << arr_count[z] << "     ";
    }
    cout << "\n\n";

    return 0;
}
