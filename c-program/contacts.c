#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50

struct Person {
    char name[MAX_NAME_LENGTH];
    int age;
};

// Function to add a contact
void addContact(struct Person contacts[], int *count) {
    if (*count >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }
    
    printf("Enter name: ");
    scanf(" %[^\n]", contacts[*count].name); // Read string with spaces
    
    // Clear input buffer
    while (getchar() != '\n');
    
    printf("Enter age: ");
    scanf("%d", &contacts[*count].age);
    
    // Clear input buffer again
    while (getchar() != '\n');
    
    (*count)++;
    printf("Contact added successfully!\n");
    
    // Save to file
    FILE *file = fopen("contacts.txt", "a");
    if (file != NULL) {
        fprintf(file, "%s,%d\n", contacts[*count-1].name, contacts[*count-1].age);
        fclose(file);
    }
}

// Function to view all contacts
void viewContacts(struct Person contacts[], int count) {
    if (count == 0) {
        printf("No contacts found.\n");
        return;
    }
    
    printf("\n=== Contact List ===\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Name: %s, Age: %d\n", i + 1, contacts[i].name, contacts[i].age);
    }
    printf("====================\n");
}

// Function to load contacts from file
int loadContacts(struct Person contacts[]) {
    FILE *file = fopen("contacts.txt", "r");
    int count = 0;
    
    if (file == NULL) {
        return 0; // File doesn't exist yet
    }
    
    char line[100];
    while (fgets(line, sizeof(line), file) && count < MAX_CONTACTS) {
        char *name = strtok(line, ",");
        char *age_str = strtok(NULL, ",");
        
        if (name != NULL && age_str != NULL) {
            strcpy(contacts[count].name, name);
            contacts[count].age = atoi(age_str);
            count++;
        }
    }
    
    fclose(file);
    return count;
}

int main() {
    struct Person contacts[MAX_CONTACTS];
    int count = 0;
    int choice;
    
    // Load existing contacts from file
    count = loadContacts(contacts);
    printf("Loaded %d existing contacts from file.\n", count);
    
    while (1) {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                viewContacts(contacts, count);
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
