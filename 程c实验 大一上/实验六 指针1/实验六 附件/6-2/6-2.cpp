#include <iostream>
using namespace std;
int main()
{
    char str[] = "Do you have Windows 10 on your PC?";
    char *ptr = str;
    char *temp = ptr;

    int len = 0;

    while (*temp != '\0')
    {
        len++;
        temp++;
    }

    cout << ptr << "¡ª¡ª" << len << "¸ö×Ö·û£¡" << endl;

    return 0;
}
