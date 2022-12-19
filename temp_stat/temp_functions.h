struct month { int max, min; float average; };
_Bool check_line(char *line);
int mean(int n, float old_mean, int x);
void read_line(char *line, int *year, int *month, int *day, int *hour, int *minute, int *temperature);
void year_analysis(struct month data[], _Bool all_month);