#include <stdio.h>
#include <string.h>

// Function to find longest common prefix
char* longestCommonPrefix(char strs[][201], int n) {
    static char prefix[201];   // buffer to hold result
    strcpy(prefix, strs[0]);   // start with first string

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';  // shorten prefix
        if (prefix[0] == '\0') {
            return prefix; // no common prefix
        }
    }
    return prefix;
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[200][201];  // up to 200 strings, each length ≤ 200
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%200s", strs[i]);
    }

    char* result = longestCommonPrefix(strs, n);
    if (strlen(result) == 0) {
        printf("Output: \"\"\n");
    } else {
        printf("Output: \"%s\"\n", result);
    }

    return 0;
}
