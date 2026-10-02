#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t) {
    // Step 1: Length check
    if (strlen(s) != strlen(t)) {
        return false;
    }

    // Step 2: Frequency array (only one needed)
    int count[26] = {0};

    // Step 3: Count characters in s and subtract for t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Step 4: Verify all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[201], t[201];  // max length 200 as per constraints

    // Ask user for input
    printf("Enter first string: ");
    scanf("%200s", s);

    printf("Enter second string: ");
    scanf("%200s", t);

    // Check anagram
    if (isAnagram(s, t)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
