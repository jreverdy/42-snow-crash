#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("No argument provided\n");
        return 1;
    }

    char *str = argv[1];
    int i = 0;
    while (str[i]) {
        int val = str[i] - i;
        i += 1;
        printf("%c", val);
    }

    printf("\n");
}
