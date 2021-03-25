#include<iostream>

int main()
{
    char ch[] = "off the final fl fffl";
    int count = 0;

    for (int i = 1; i != sizeof(ch); i++)
    {
        switch (ch[i - 1])
        {
        case 'f':
            if (ch[i] == 'f' && ch[i + 1] != 'f' || ch[i] == 'i' || ch[i] == 'l') count++;
            break;
        default:
            break;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
