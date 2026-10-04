#include <stdio.h>

void displayString(void *data)
{
    char *text = (char *)data;

    printf("String: %s\n", text);
}

int main()
{
    char message[] = "Hello, C Programming!";

    displayString(message);

    return 0;
}
