
// Task 6: Find and print the longest name
void findLongestName(struct Student* head) {
    int maxLength = 0;
    char longestName[50];

    while (head != NULL) {
        int currentLength = strlen(head->name);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longestName, head->name);
        }
        head = head->next;
    }

    printf("The longest name in the list: %s\nLength: %d\n", longestName, maxLength);
}
