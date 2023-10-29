
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Task 1: Linked list for student information
struct Student {
    int student_number;
    char name[50];
    int age;
    struct Student* next;
};
