#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <temp_functions.h>

const char* getfield(char* line, int num)
{
    const char* token;

    for (token = strtok(line, ";"); token && *token; token = strtok(NULL, ";\n"))
    {
        if (!--num)
            return token;
    }
    return NULL;
}

int main(void){
    FILE *table = fopen("temperature_example.csv", "r");
    char line[14 + 5];

    while (fgets(line, (14 + 5), table))
    {
        char* tmp = strdup(line);
        printf("%s ", getfield(tmp, 1));
        free(tmp);
    }
    return 0;
}