#include <stdio.h>
#include <string.h>

// Function prototypes
void displayAvailableCourses();
void addCourse();
void exitProgram();

int main() {
    int choice;

        printf("          COURSE REGISTRATION SYSTEM          \n");
        printf("                                                                            \n");

        printf("Welcome to the University Course Registration System.\n");
        do{
        printf("\nMain Menu:\n");
        printf("1. Display Available Courses\n");
        printf("2. Add Course\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAvailableCourses();
                break;
            case 2:
                addCourse();
                break;
            case 3:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again!\n");

    }
        }while(choice!=3);

    return 0;
}

void displayAvailableCourses() {
    int course;
    printf("Available Courses:\n");
    printf("1. Bachelor of Science in Physics and Electronics\n");
    printf("2. Bachelor of Science (Hons) in Electronics and Computer Science\n");
    printf("Enter your course: ");
    scanf("%d", &course);

    FILE* fp;
    char string[1000];

    switch (course) {
        case 1:
            fp = fopen("coursesPE.txt", "r");
            if (fp == NULL) {
                printf("Error opening file.\n");
                return;
            }
            while (fgets(string, sizeof(string), fp)) {
                printf("%s", string);
            }
            printf("You will be redirected to 'Add course' section now.\nPlease proceed with the course you're enrolling from here.\n");
            fclose(fp);
            break;
        case 2:
            fp = fopen("coursesECS.txt", "r");
            if (fp == NULL) {
                printf("Error opening file.\n");
                return;
            }
            while (fgets(string, sizeof(string), fp)) {
                printf("%s", string);
            }
            printf("You will be redirected to 'Add course' section now.\nPlease proceed with the course you're enrolling from here.\n");
            fclose(fp);
            break;
        default:
            printf("Invalid choice. Please try again!\n");
    }
}

void addCourse() {
    int degree, path;
    char st_no[15];

    printf("Add Course Menu:\n");
    printf("1. Bachelor of Science in Physics and Electronics\n");
    printf("2. Bachelor of Science (Hons) in Electronics and Computer Science\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &degree);

    switch (degree) {
        case 1:
            printf("Choose your path: Enter 1 or 2: ");
            scanf("%d", &path);
            printf("Enter your Student Number: ");
            scanf("%s", st_no);
            printf("You have successfully enrolled in Bachelor of Science in Physics and Electronics degree program!\n");

            FILE* fp = fopen("outputPE.txt", "w");
            if (fp == NULL) {
                printf("Error opening file.\n");
                return;
            }
            fprintf(fp, "%s\tBachelor of Science in Physics and Electronics\t%d\n", st_no, path);
            fclose(fp);
            break;

        case 2:
            printf("Enter your Student Number: ");
            scanf("%s", st_no);
            printf("You have successfully enrolled in Bachelor of Science (Hons) in Electronics and Computer Science degree program!\n");

            fp = fopen("outputECS.txt", "w");
            if (fp == NULL) {
                printf("Error opening file.\n");
                return;
            }
            fprintf(fp, "%s\tBachelor of Science (Hons) in Electronics and Computer Science\n", st_no);
            fclose(fp);
            break;

        case 3:
            printf("Exiting the Add Course section.\n");
            break;
        default:
            printf("Invalid choice. Please try again!\n");
    }
}

void exitProgram() {
    printf("Exiting the program. Thank you!\n");
}
