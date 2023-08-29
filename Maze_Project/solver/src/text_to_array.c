/*
** EPITECH PROJECT, 2023
** text_to_array.c
** File description:
** text_to_array.c
*/

#include "../include/my.h"
#include "../include/struct.h"

char** text_to_array(char* fileName, int numLines, s_t *data)
{
    FILE* file = fopen(fileName, "r");
    char** lines = NULL;
    int size = 2048; char buffer[2048];
    int count = 0;
    while (fgets(buffer, 2048, file) != NULL) {
        count++;
        char** temp = realloc(lines, count * sizeof(char*));
        if (temp == NULL) {
            exit(84);
        }
        lines = temp;
        lines[count - 1] = malloc(my_strlen(buffer) + 1);
        if (lines[count - 1] == NULL) {
            exit(84);
        }
        strcpy(lines[count - 1], buffer);
    }
    fclose(file);
    numLines = count;
    return lines;
}
