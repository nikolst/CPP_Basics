/*Да се напише програма, която въвежда от клавиатурата два низа. Да се изведе на 
монитора колко пъти вторият низ се среща в първия. Вторият низ да бъде с по-малка дължина от първия.*/

#include<iostream>
using namespace std;
int main()
{
    char str1[20], str2[15];
    int counter = 0;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int str1Len = strlen(str1); //дължината на първия низ
    int str2Len = strlen(str2); //дължината на втория низ
    int j;

    for(int i = 0; i < str1Len; i++)
    {
        for(j = 0; j < str2Len; j++)
        {
            if(str1[i + j] != str2[j]) break;
        }
        if(j == str2Len) counter++;
    }
    cout << "The second string appears " << counter << " times in the first string." << endl;
    return 0;
}
