#include <stdio.h>
#include <string.h>

void sortString(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int findStartingIndex(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s[] = "tree";
    
    sortString(s);
    int startingIndex = findStartingIndex(s);
    
    printf("Sorted String: %s\n", s);
    printf("Starting Index of Repeated Character: %d\n", startingIndex);
    
    return 0;
}
