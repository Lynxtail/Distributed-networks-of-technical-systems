#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "temp_functions.h"

// struct month { int max, min; float average; };


int main(int argc, char *argv[]){
    // printf("%d\n", argc);
    // printf("%s\n%d\n\n", argv[1], !strcmp(argv[1], "-h"));
    char filename[] = "temperature_small.csv";
    int choice = -1;
    if (argc > 1) {
        if (!strcmp(argv[1], "-h"))
            printf("Possible keys:\n-h -- list of keys;\n-f <filename.csv> -- input file csv;\n-m <month's number> -- if exist then getting statistics for a given month else getting statistics for a whole year.\n\n");
        if (!strcmp(argv[1], "-f"))
            strcpy(filename, argv[2]);
        if (!strcmp(argv[1], "-m"))
            choice = atoi(argv[2]) - 1;
        // printf("%s\n", argv[2]);
        // printf("%d\n", choice);
    }

    FILE *table = fopen(filename, "r");
    int year = 0, month = 0, day = 0, hour = 0, minute = 0, temperature = 0;
    int line_len = 4 + 2 + 2 + 2 + 2 + 3 + 7, data_len = 12;
    char tmp_line[line_len]; struct month data[12] = {{0}};
    int line_count = 0, data_size = 0, max = -99, min = 99, current_month = 1;
    float average = 0;
    
    while (fgets(tmp_line, line_len, table)) {
        line_count++;
        // char tmp[strlen(tmp_line)]; 
        // strcpy(tmp, tmp_line);
        // printf("line %d\nreaded: %s\n", line_count, tmp_line);
        if (check_line(tmp_line)) {
            read_line(tmp_line, &year, &month, &day, &hour, &minute, &temperature); 
            // printf("line %d\nreaded: %s\n", line_count, tmp_line);
            // printf("result: %d %d %d %d %d %d\n", year, month, day, hour, minute, temperature);
            if (current_month != month) {
                data_size = 0; max = -99; min = 99; average = 0; current_month = month; }
            ++data_size; 
            if (temperature > max) max = temperature;
            if (temperature < min) min = temperature;
            if (data_size == 1) average = (float) temperature;
            else average = mean(data_size, average, temperature);
            // printf("\nat line %d\nMonth: %d\nAverage: %f\nMax: %d\nMin: %d\n", line_count, month, average, max, min);
            data[month - 1].max = max; 
            data[month - 1].min = min; 
            data[month - 1].average = average;
            // printf("\nat line %d\nMonth: %d\nAverage: %f\nMax: %d\nMin: %d\n", line_count, month, data[month - 1].average, data[month - 1].max, data[month - 1].min);
            // printf("\nat data\nMonth: %d\nAverage: %f\nMax: %d\nMin: %d\n", i + 1, data[i].average, data[i].max, data[i].min);
        }
        else printf("line %d is invalid\n", line_count);
        year = 0; month = 0; day = 0; hour = 0; minute = 0; temperature = 0;
    }
    fclose(table);

    _Bool flag = 1; 
    
    if (choice >= 0) {
        flag = 0; 
        printf("\nMonth: %d\n\tAverage: %f\n\tMax: %d\n\tMin: %d\n", choice + 1, data[choice].average, data[choice].max, data[choice].min);
    }
    year_analysis(data, flag);
    // char str[] = "2021;01;16;01;01;-47";
    // printf("%d", check_line(str));
    return 0;
}