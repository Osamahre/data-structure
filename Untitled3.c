// Task 3: Print all student information
void printStudentInfo(struct Student* head) {
    int count = 1;
    while (head != NULL) {
        printf("%d - %s %d %d\n", head->student_number, head->name, head->age, count);
        head = head->next;
        count++;
    }
}
