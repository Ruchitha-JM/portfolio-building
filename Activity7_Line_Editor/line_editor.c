#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

void insertLine(char lines[MAX_LINES][MAX_LENGTH], int *lineCount)
{
    int lineNumber;

    if (*lineCount >= MAX_LINES)
    {
        printf("Document is full. Cannot insert more lines.\n");
        return;
    }

    printf("Enter line number to insert (1-%d): ", *lineCount + 1);
    scanf("%d", &lineNumber);
    getchar();

    if (lineNumber < 1 || lineNumber > *lineCount + 1)
    {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = *lineCount; i >= lineNumber; i--)
    {
        strcpy(lines[i], lines[i - 1]);
    }

    printf("Enter the text: ");
    fgets(lines[lineNumber - 1], MAX_LENGTH, stdin);

    lines[lineNumber - 1][strcspn(lines[lineNumber - 1], "\n")] = '\0';

    (*lineCount)++;

    printf("Line inserted successfully.\n");
}

void deleteLine(char lines[MAX_LINES][MAX_LENGTH], int *lineCount)
{
    int lineNumber;

    if (*lineCount == 0)
    {
        printf("Document is empty. Nothing to delete.\n");
        return;
    }

    printf("Enter line number to delete (1-%d): ", *lineCount);
    scanf("%d", &lineNumber);
    getchar();

    if (lineNumber < 1 || lineNumber > *lineCount)
    {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = lineNumber - 1; i < *lineCount - 1; i++)
    {
        strcpy(lines[i], lines[i + 1]);
    }

    (*lineCount)--;

    printf("Line deleted successfully.\n");
}

void displayDocument(char lines[MAX_LINES][MAX_LENGTH], int lineCount)
{
    if (lineCount == 0)
    {
        printf("\nDocument is empty.\n");
        return;
    }

    printf("\n----- DOCUMENT -----\n");

    for (int i = 0; i < lineCount; i++)
    {
        printf("%d: %s\n", i + 1, lines[i]);
    }

    printf("--------------------\n");
}

int main()
{
    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;
    int choice;

    printf("=================================\n");
    printf("       SIMPLE LINE EDITOR\n");
    printf("=================================\n");

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert Line\n");
        printf("2. Delete Line\n");
        printf("3. Display Document\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                insertLine(lines, &lineCount);
                break;

            case 2:
                deleteLine(lines, &lineCount);
                break;

            case 3:
                displayDocument(lines, lineCount);
                break;

            case 4:
                printf("Exiting Line Editor. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}