#include <stdio.h>

int main(void)
{

    char str[] = "(()())(())";
    int depth = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == '(')
        {
            if (depth > 0)
                printf("(");

            depth++;
        }

        else if (str[i] == ')')
        {
            depth--;

            if (depth > 0)
                printf(")");
        }
    }

    return 0;
}