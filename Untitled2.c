
// Task 2: Insert an odd number at the beginning and even at the end
void insertOddEven(struct Student** head, int student_number, const char* name, int age) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newStudent->student_number = student_number;
    strcpy(newStudent->name, name);
    newStudent->age = age;
    newStudent->next = NULL;

    if (*head == NULL) {
        *head = newStudent;
    } else {
        struct Student* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStudent;
    }
}
