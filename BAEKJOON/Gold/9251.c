#include <stdio.h>
#include <string.h>
#define max(a, b) a > b ? a : b

int DP[1001][1001];

int main() {
    char str1[1001], str2[1001];

    scanf("%s", &str1[1]);
    scanf("%s", &str2[1]);

    int len1 = strlen(&str1[1]), len2 = strlen(&str2[1]);

    for(int i = 1; i <= len1; i++) {
        for(int j = 1; j <= len2; j++) {
            if(str1[i] == str2[j]) {
                DP[i][j] = DP[i - 1][j - 1] + 1;
            }

            else { 
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
    }

    printf("%d", DP[len1][len2]);

    return 0;
}