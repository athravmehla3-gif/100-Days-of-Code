#include <stdio.h>

enum Status {
    LOWER,
    HIGHER
};

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;
    enum Status state;

    // Read number of students
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student s[n];

    // Read student details
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find the student with the highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            state = HIGHER;
        } else {
            state = LOWER;
        }

        if (state == HIGHER) {
            topperIndex = i;
        }
    }

    // Print the topper
    printf("Topper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
