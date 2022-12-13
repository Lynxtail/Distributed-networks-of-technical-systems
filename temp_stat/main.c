#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct month { int max, min, average; };

_Bool check_line(char *line) {
    for (size_t i = 0; i < strlen(line); i++)
        if (!(strpbrk(line, "0123456789-; ")))
            return 0;
    return 1;
}

int mean(int n){
    static int old_mean = 1;
    return old_mean + old_mean / n;
}

void read_line(char *line, int *year, int *month, int *day, int *hour, int *minute, int *temperature) {
    const char *tmp = strtok(line, ";");
    
    while (tmp != NULL) {
        int *res = 0;
        !*(res = year) || 
        !*(res = month) || 
        !*(res = day) || 
        !*(res = hour) || 
        !*(res = minute) || 
        !*(res = temperature);
        // printf("%p : ", res);
        // printf("%d\n", *res);
        *res = atoi(tmp);
        // printf("%p : ", res);
        // printf("%d\n", *res);
        printf("%d (%d); ", *res, *year);
        tmp = strtok(NULL, ";");
    }
    printf("\n");
}

// анализ года или месяца?
void year_analysis(FILE *table){
    
    }


int main(void){
    FILE *table = fopen("temperature_small.csv", "r");
    // struct line data[data_len];
    // for (size_t i = 0; i < data_len; i++) {
    //     data[i].year, data[i].month, data[i].day, data[i].hour, data[i].minute, data[i].temperature = 0;
    // }
    
    int year = 0, month = 0, day = 0, hour = 0, minute = 0, temperature = 0;
    int line_len = 4 + 2 + 2 + 2 + 2 + 3 + 7, data_len = 12;
    char tmp_line[line_len]; struct month data[data_len];
    int line_count = 0, data_size = 0, max = -99, min = 99, average = 0, current_month = 1;
    while (fgets(tmp_line, line_len, table)) {
        line_count++;
        char *tmp = strdup(tmp_line);
        printf("line %d %s\n", line_count, tmp);
        if (check_line(tmp)) {
            read_line(tmp, &year, &month, &day, &hour, &minute, &temperature); 
            printf("%d %d %d %d %d %d\n", year, month, day, hour, minute, temperature);
            if (current_month == month) {
                ++data_size; 
                if (temperature > max) max = temperature;
                else if (temperature < min) min = temperature;
                average = mean(data_size);
                data[month - 1].max = max; 
                data[month - 1].min = min; 
                data[month - 1].average = average;
            }
            else data_size = 0, max = -99, min = 99, average = 0, current_month = month;
        }
        else printf("line %d is invalid\n", line_count);
        free(tmp);
    }
    fclose(table);

    for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++)
        printf("\nMonth: %d\nAverage: %d\nMax: %d\nMin: %d\n", i + 1, data[i].average, data[i].max, data[i].min);

    char str[] = "2021;4;16;1;1;0";
    printf("%d", check_line(str));
    return 0;
}