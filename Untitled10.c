
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int studentNumber;
    char name[50];
    int age;
    struct Student* next;
};

void printStudents(struct Student* head) {
    struct Student* current = head;
    int count = 1;

    while (current != NULL) {
        printf("%d- %s %d %d\n", count, current->name, current->age, current->studentNumber);
        current = current->next;
        count++;
    }
}

int main() {
    struct Student* head = NULL;
    struct Student* newNode;
    int studentNumber, age;
    char name[50];

    while (1) {
        printf("Enter student number, name, and age (-1 to stop):\n");
        scanf("%d", &studentNumber);
        if (studentNumber == -1) {
            break;
        }
        scanf("%s %d", name, &age);

        newNode = (struct Student*)malloc(sizeof(struct Student));
        newNode->studentNumber = studentNumber;
        strcpy(newNode->name, name);
        newNode->age = age;
        newNode->next = head;

        head = newNode;
    }

    printf("Student Information:\n");
    printStudents(head);

    return 0;
}
