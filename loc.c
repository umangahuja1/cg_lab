#include <stdio.h>

int main()
{
    int line_count = 0, comment_count = 0, empty_count = 0, code_count = 0;
    FILE *fp1;

    char ch;

    fp1 = fopen("hello.c", "r");

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch  ==  '\n')
            line_count++;

        if (ch  ==  '\n')
            if ((ch = fgetc(fp1))  ==  '\n')
            {
                fseek(fp1, -1, 1);
                empty_count++;
            }

        if (ch  ==  ';')
            if ((ch = fgetc(fp1))  ==  '\n')
            {
                fseek(fp1, -1, 1);
                code_count++;
            }
    }

    fseek(fp1, 0, 0);

    while ((ch = fgetc(fp1)) != EOF)
        if (ch  ==  '/')
            if ((ch = fgetc(fp1))  ==  '/')
                comment_count++;

    printf("Total no of lines: %d\n", line_count);
    printf("Total no of comment line: %d\n", comment_count);
    printf("Total no of blank lines: %d\n", empty_count);
    printf("Total no of non blank lines: %d\n", line_count-empty_count);
    printf("Total no of lines end with semicolon: %d\n", code_count);
}