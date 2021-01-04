/*Да се състави програма, която въвежда от клавиатурата целите числа p и q (p < q). 
Програмата да извежда простите числа в интервала [p,q].*/

#include <iostream>
using namespace std;
int main()
{
    int p, q;
    int flag;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;

    for (int i = p; i <= q; i++)
    {
        if(i == 1 || i == 0){
            continue;
        }

        flag = 1;
        
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}