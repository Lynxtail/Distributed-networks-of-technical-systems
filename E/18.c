// В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел 
// в диапазоне от 2 до 9

#include <stdio.h>

int main(void){
    int n;
    int cnt[8];
    for (int i = 0; i < 8; i++) cnt[i] = 0;
    scanf("%d", &n);
    for (int j = 0; j < 8; j++)
        for (int i = 2; i <= n; i++)
            if (i % (j + 2) == 0) cnt[j]++;
    for (int i = 0; i < 8; i++) printf("%d %d\n", i+2, cnt[i]);
    return 0;
}