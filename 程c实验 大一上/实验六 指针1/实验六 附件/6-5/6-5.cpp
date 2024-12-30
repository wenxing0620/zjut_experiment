#include <iostream>
using namespace std;
int strequal(char *, char *);
int main()
{
    char a1[] = "OPQR";
    char a2[] = "ABCDEFGH";
    int a = strequal(a1, a2);
    if (a == 1)
        cout << "a1>a2" << endl;
    else
        cout << "not biger" << endl;
    return 0;
}
int strequal(char *s1, char *s2)
{
    int re, i=0, j=0;
    char *t1,*t2;
    t1=s1;
    t2=s2;
    while (*t1 != '\0')
    {
        i++;
        t1++;
    }
    while (*t2 != '\0')
        {j++;
        t2++;}
    if (i - j <=0)
        return -1;
    
    
        while (*s1 != '\0' && *s2 != '\0')
        {
            if (*s1 <= *s2)
            {
                return -1;
            }
            s1++;
            s2++;
        }
        return 1;
    
}