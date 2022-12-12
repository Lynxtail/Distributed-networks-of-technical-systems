#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct line { int year, month, day, hour, minute, temperature; };


void getfield(char *line, int num) {
    const char *tmp = strtok(line, ";");
    int year = 0, month = 0, day = 0, hour = 0, minute = 0, temperature = 0;
    while (tmp != NULL) {
        int *res = 0;
        !*(res = &year) || 
        !*(res = &month) || 
        !*(res = &day) || 
        !*(res = &hour) || 
        !*(res = &minute) || 
        !*(res = &temperature);
        // printf("%p : ", res);
        // printf("%d\n", *res);
        *res = atoi(tmp);
        // printf("%p : ", res);
        // printf("%d\n", *res);
        printf("%d; ", *res);
        tmp = strtok(NULL, ";");
    }
    printf("\n");
        // if (!--num) return token;
    // return NULL;
}

int main(void){
    FILE *table = fopen("temperature_small.csv", "r");
    int line_len = 4 + 2 + 2 + 2 + 2 + 3 + 6, data_len = 365 * 24 * 60;
    int year, month, day, hour, minute, temperature;
    char tmp_line[line_len];
    // struct line data[data_len];
    // for (size_t i = 0; i < data_len; i++) {
    //     data[i].year, data[i].month, data[i].day, data[i].hour, data[i].minute, data[i].temperature = 0;
    // }

    while (fgets(tmp_line, line_len, table)) {
        char *tmp = strdup(tmp_line);
        printf("%s\n", tmp);
        // printf("%s ", tmp);
        // printf("%s ", getfield(tmp, 1));
        getfield(tmp, 1);
        free(tmp);
    }
    return 0;
}