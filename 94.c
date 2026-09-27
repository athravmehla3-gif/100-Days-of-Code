#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50] = "";

    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';

            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;
        }
        i++;
    }

    printf("%s", longest);

    return 0;
}
