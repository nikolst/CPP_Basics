/*Да се напише програма, която въвежда от клавиатурата низ (без да се използва функцията 
strlen) и да се изведе на екрана дължината му.*/

#include <iostream>
using namespace std;
int main()
{
    char str[21]; //деклариране на низ с максимална дължина 20 символа
    int str_count = 0; //брояч с начална стойност 0

    cout << "Enter your string: ";
    cin >> str; //въвеждаме низ от клавиатурата

    //***Any string ends with a terminating null character ‘\0’.
    for (int i = 0; str[i] != '\0'; i++)
        str_count++; //за всеки символ увеличаваме брояча с 1
    cout << "The number of symbols is: " << str_count << endl; //извеждаме на екран броят символи
    return 0;
}
