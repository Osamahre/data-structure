
// Task 4: Search for a student by name
struct Student* searchStudent(struct Student* head, const char* searchName) {
    while (head != NULL) {
        if (strcmp(head->name, searchName) == 0) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}
