#include <stdio.h>
#include <string.h>
#include <time.h>

void function(char *sampleText)
{
    char copy[130];
    strcpy(copy, sampleText);
    printf("%s\n", copy);
    for (int i = 0; i < 130; i++)
    {
        char *p = strchr(copy, 'a');
        if (p == NULL)
        {
            break;
        }
        strcpy(&copy[p - copy], &copy[p - copy + 1]);
    }
    printf("%s\n", copy);
}

int main()
{
    char *sampleText = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";

    function(sampleText);

    return 0;
}