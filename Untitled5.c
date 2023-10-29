
// Task 5: Delete the next node from the given student
void deleteNextNode(struct Student* student) {
    if (student != NULL && student->next != NULL) {
        struct Student* toDelete = student->next;
        student->next = toDelete->next;
        free(toDelete);
    }
}
