#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student topStudent(struct Student s[], int n) {
    int i, max = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    int n, i;
    struct Student s[100], top;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = topStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
