#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[256];
    int total = 0, error = 0, warning = 0, info = 0;

    file = fopen("logfile.txt", "r");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        total++;

        if (strstr(line, "ERROR"))
            error++;
        else if (strstr(line, "WARNING"))
            warning++;
        else if (strstr(line, "INFO"))
            info++;
    }

    fclose(file);

    printf("Total Lines: %d\n", total);
    printf("INFO: %d\n", info);
    printf("WARNING: %d\n", warning);
    printf("ERROR: %d\n", error);

    return 0;
}
