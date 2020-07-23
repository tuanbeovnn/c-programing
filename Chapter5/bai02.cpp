#include <stdio.h>
#include <cstring>

int getLength(char a[])
{
    int length = 0;
    while (a[length] != '\0')
        length++;

    return length;
}

void demTu(char a[])
{

    while (a[0] == ' ')
    {
        for (int i = 0; i < getLength(a); i++)
        {
            a[i] = a[i + 1];
        }
    }
    
    printf("%s", a);
}

int main()
{
    char s[100]; // -> bao hieu

    printf("Nhap vao chuoi s: ");
    gets(s);
    printf("Chuoi nhap vao la: %s\n", s); // == puts(s); // s = string // c = char = character

    demTu(s);
}