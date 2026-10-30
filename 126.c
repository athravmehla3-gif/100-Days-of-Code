#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist!\n");
    }
    else
    {
        printf("File opened successfully.\n");

        while (fgets(ch, sizeof(ch), fp) != NULL)
        {
            printf("%s", ch);
        }

        fclose(fp);
    }

    return 0;
}
