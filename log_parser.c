#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[1024];

    file = fopen("system.log", "r"); // Change to your log file name

    if (file == NULL) {
        printf("Error: Could not open the log file.\n");
        return 1;
    }

    printf("Filtered Logs (only lines with 'ERROR'):\n\n");

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, "ERROR")) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
