/*Да се състави програма, която въвежда от клавиатурата цяло положително
трицифрено число. Програмата да извежда числото записано в обратен ред на цифрите му.*/

#include<iostream>
using namespace std;
int main()
{
    int x; //числото, което въвеждаме е x
    cout << "Enter x: ";
    cin >> x; //въвеждаме x

    int a = x % 10; //брой на единиците на числото x
    //cout << a << endl;
    int b = (x / 10) % 10; //брой на десетиците на числото x
    //cout << b << endl;
    int c = (x / 100) % 10; //брой на стотиците на числото x
    //cout << c << endl;

    cout << a << b << c << endl; //извеждаме числото x в обратен ред
    return 0;
}
