#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "temp_functions.h"

// struct month { int max, min; float average; };

_Bool check_line(char *line) {
    if (!(strpbrk(line, "0123456789-; "))) return 0; // нужно "состоит ТОЛЬКО из символов под строки"
    return 1;
    // char tmp[] = {"0123456789-; "}; _Bool flag = 1;
    // for (size_t i = 0; i < strlen(line); i++) {
    //     if (line[i] != '\0') flag = 0;
    //     for (size_t j = 0; j < strlen(tmp); j++)
    //         if (line[i] == tmp[j]) { flag = 1; break; }
    // }
    // for (size_t i = 0; i < strlen(line); i++)
    //     if (!(line[i] >= '0' && line[i] <= '9' || line[i] == '-' || line[i] == ';')) flag = 0;
    // return flag;            
    
}

int mean(int n, float old_mean, int x){
    // static int old_mean = start_value;
    // printf("i = %d: mean = %f\n", n, (float) (n - 1) / (float) n * old_mean + (float) x / (float) n);
    return old_mean * (n - 1) / n  + x / n;
}

void read_line(char *line, int *year, int *month, int *day, int *hour, int *minute, int *temperature) {
    const char *tmp = strtok(line, ";");
    // printf("spliting: ");
    while (tmp != NULL) {
        int *res = 0;
        !*(res = year) || 
        !*(res = month) || 
        !*(res = day) || 
        !*(res = hour) || 
        !*(res = minute) || 
        !*(res = temperature);
        // if (*year == 0) res = year;
        // else if (*month == 0) res = month;
        // else if (*day == 0) res = day;
        // else if (*hour == 0) res = hour;
        // else if (*minute == 0) res = minute;
        // else if (*temperature == 0) res = temperature;
        // printf("%p : ", res);
        // printf("%d\n", *res);
        *res = atoi(tmp);
        // printf("%p : ", res);
        // printf("%d\n", *res);
        // printf("%d;", *res);
        tmp = strtok(NULL, ";");
    }
    // printf("\nsplited: %d %d %d %d %d %d\n", *year, *month, *day, *hour, *minute, *temperature);
}

void year_analysis(struct month data[], _Bool all_month){
    int max = -99, min = 99; float average = 0;
    for (int i = 0; i < 12; i++) {
        if (data[i].max > max) max = data[i].max;
        if (data[i].min < min) min = data[i].min;
        if (i == 0) average = data[i].average;
        else average = mean(i + 1, average, data[i].average);
    }
    if (all_month) 
        for (size_t i = 0; i < 12; i++)
            printf("\nMonth: %d\n\tAverage: %f\n\tMax: %d\n\tMin: %d\n", i + 1, data[i].average, data[i].max, data[i].min);
    printf("\nYear analytics:\n\tAverage: %f\n\tMax: %d\n\tMin: %d\n", average, max, min);
}