#include <stdio.h>

int legnagyobb_oszto(int n) {
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0)
            return i;
    }
    return 1; // Ha n=1, nincs más osztó
}

int main() {
    for (int i = 1; i <= 50; i++) {
        printf("%d: %d\n", i, legnagyobb_oszto(i));
    }
    return 0;
}
