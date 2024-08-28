/*
Author: Janindu Chathurangana
Group Members : Vihanga Chamalka
                Prabodha Pathirana
Student No.: PE/2021/030
Title(Authors' part) : Student Registration Part
Group Number: 41

This program provides a basic structure for registering information of students in various degree programs and storing that information in separate text files.
However, it assumes that the user enters valid data and does not include more robust error handling or data validation.
In addition, it may require further refinement and testing for practical use.

  Copyright 2024 PRABODHA PATHIRANA

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

//(Include necessary header files) The standard input/output and standard library header files, which provide functions for file handling and user input/output.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void displayAvailableCourses();
void addCourse();
void exitProgram();
float GPAprint(float,int);
void GPAcalc(int,int,char stno[]);

//function for display header of the UI
void header() {
    printf("                                                                            \n");
    printf("          STUDENT REGISTRATION SYSTEM          \n"); // print the title of the program
    printf("                                                                            \n");
}

//function for display paths
void path(){
//displays a user interface with available paths for degree programs and prompts the user to enter a choice:
    printf("Available paths\n");
    printf("1. Bsc in Physics and Electronics\n");
    printf("2. Bsc Physical Science\n");
    printf("3. Bsc Electronics and Computer Science\n");
    printf("4. Bsc Computer Science\n");
    printf("                                                                            \n");
}

//(Declare variables) These variables are used to store various student information, counters, and the selected path for the degree program.
int main() {
    char student_first_name[50];
    char student_last_name[50];
    char birth_day[50];
    char Id_number[50];
    int no, i, c = 1, path0, path1, path2, path3, path4;

//File Handling

    FILE *fptr;

    fptr = fopen("studentName.txt", "a"); //opens the "studentName.txt" file in append mode
    fprintf(fptr, "STUDENT NAME\n"); //writes the "STUDENT NAME" header
    fclose(fptr); // closes the file

    fptr = fopen("birthDay.txt", "a");
    fprintf(fptr, "STUDENT NAME \t BIRTHDAY\n");
    fclose(fptr);

    fptr = fopen("Id_number.txt", "a");
    fprintf(fptr, "STUDENT NAME \t NIC NUMBER\n");
    fclose(fptr);

    header(); //function calling

    path();//function calling

    printf("Enter Degree programme (Enter value): ");
    scanf("%d", &path0);
    printf("                                                                            \n");
/*
Conditional Processing;
The section starts with if, those lines perform conditional processing based on the value stored in path0.
Depending on the selected path (1 to 4), the program enters one of the if branches for student registration.
If path0 is not 1, 2, 3, or 4, it displays an error message and exits the program.

Each if branch corresponds to a specific degree program path (e.g., Physics and Electronics, Physical. The user have
to enter the number of students for that program.
Then, the program collects student information, such as first name, last name, birth date, and ID number,
for the specified number of students and writes this information to corresponding text files.
*/
    if (path0 == 1) { // Student registration for path 1
        /*the program prompts the user for student information and writes it to the corresponding text files using the fprintf function.
          The files are opened, data is written, and then the files are closed: */
        printf("How many students in path 1: ");
        scanf("%d", &path1);

        for (i = 1; i <= path1; i++) {
            fptr = fopen("PE.txt", "a");
            fprintf(fptr, "PE/2021/%d \t  %s %s\n", c, student_first_name, student_last_name);
            fclose(fptr);

            printf("                                                                            \n");
            fptr = fopen("studentName.txt", "a");
            printf("Enter student first name: ");
            scanf("%s", student_first_name);
            printf("Enter student last name: ");
            scanf("%s", student_last_name);
            fprintf(fptr, "%d. %s %s\n", i, student_first_name, student_last_name);
            fclose(fptr);

            fptr = fopen("birthDay.txt", "a");
            printf("Enter student Birth Day(YY/MM/DD): ");
            scanf("%s", birth_day);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, birth_day);
            fclose(fptr);

            fptr = fopen("Id_number.txt", "a");
            printf("Enter ID number: ");
            scanf("%s", Id_number);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, Id_number);
            fclose(fptr);

            printf("_________________________________________________________________\n");
            printf("Information of student %d has been saved successfully.\n", i); //User Feedback
            //After successfully registering a student's information, the program provides feedback to the user.
            printf("                                                                   \n");
            c++;
        }
    } else if (path0 == 2) {// Student registration for path 2
        printf("How many students in path 2: ");
        scanf("%d", &path2);

        for (i = 1; i <= path2; i++) {
            fptr = fopen("PS.txt", "a");
            fprintf(fptr, "PS/2021/%d \t  %s %s\n", c, student_first_name, student_last_name);
            fclose(fptr);

            printf("                                                                            \n");
            fptr = fopen("studentName.txt", "a");
            printf("Enter student first name: ");
            scanf("%s", student_first_name);
            printf("Enter student last name: ");
            scanf("%s", student_last_name);
            fprintf(fptr, "%d. %s %s\n", i, student_first_name, student_last_name);
            fclose(fptr);

            fptr = fopen("birthDay.txt", "a");
            printf("Enter student Birth Day(YY/MM/DD): ");
            scanf("%s", birth_day);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, birth_day);
            fclose(fptr);

            fptr = fopen("Id_number.txt", "a");
            printf("Enter ID number: ");
            scanf("%s", Id_number);
            fprintf(fptr, "%s %s \t %s\n", student_first_name, student_last_name, Id_number);
            fclose(fptr);

            printf("_________________________________________________________________\n");
            printf("Information of student %d has been saved successfully.\n", i);
            printf("                                                                   \n");
            c++;
        }
    } else if (path0 == 3) {// Student registration for path 3
        printf("How many students in path 3: ");
        scanf("%d", &path3);

        for (i = 1; i <= path3; i++) {
            fptr = fopen("ECS.txt", "a");
            fprintf(fptr, "ECS/2021/%d \t %s %s\n", c, student_first_name, student_last_name);
            fclose(fptr);

            printf("                                                                            \n");
            fptr = fopen("studentName.txt", "a");
            printf("Enter student first name: ");
            scanf("%s", student_first_name);
            printf("Enter student last name: ");
            scanf("%s", student_last_name);
            fprintf(fptr, "%d. %s %s\n", i, student_first_name, student_last_name);
            fclose(fptr);

            fptr = fopen("birthDay.txt", "a");
            printf("Enter student Birth Day(YY/MM/DD): ");
            scanf("%s", birth_day);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, birth_day);
            fclose(fptr);

            fptr = fopen("Id_number.txt", "a");
            printf("Enter ID number: ");
            scanf("%s", Id_number);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, Id_number);
            fclose(fptr);

            printf("_________________________________________________________________\n");
            printf("Information of student %d has been saved successfully.\n", i);
            printf("                                                                   \n");
            c++;
        }
    } else if (path0 == 4) {// Student registration for path 4
        printf("How many students in path 4: ");
        scanf("%d", &path4);

        for (i = 1; i <= path4; i++) {
            fptr = fopen("CS.txt", "a");
            fprintf(fptr, "CS/2021/%d \t  %s %s\n", c, student_first_name, student_last_name);
            fclose(fptr);

            printf("                                                                            \n");
            fptr = fopen("studentName.txt", "a");
            printf("Enter student first name: ");
            scanf("%s", student_first_name);
            printf("Enter student last name: ");
            scanf("%s", student_last_name);
            fprintf(fptr, "%d. %s %s\n", i, student_first_name, student_last_name);
            fclose(fptr);

            fptr = fopen("birthDay.txt", "a");
            printf("Enter student Birth Day(YY/MM/DD): ");
            scanf("%s", birth_day);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, birth_day);
            fclose(fptr);

            fptr = fopen("Id_number.txt", "a");
            printf("Enter ID number: ");
            scanf("%s", Id_number);
            fprintf(fptr, "%s %s\t %s\n", student_first_name, student_last_name, Id_number);
            fclose(fptr);

            printf("_________________________________________________________________\n");
            printf("Information of student %d has been saved successfully.\n", i);
            printf("                                                                   \n");
            c++;
        }
    /*After successfully registering each student's information, it provides feedback to the user and increments the counter c.*/
    //Error Handling
    //If the user enters an invalid path number, the program displays an error message.
    } else {
        printf("Invalid input. Try again.\n");
        return 0;
    }


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

    int course;
    char st_no[15];
    char string[1000];

	/*DISCALIMER***
	degree,path variables are taking from student's input which is processed on upper level part of the project.
	degree and path is either 1 or 2
	Edit below comments to set their values from only this portion of project*/

    int degree = 1;
    int path = 1;

    printf("          GPA CALCULATION SYSTEM          \n");
    printf("                                                                            \n");

    printf("Welcome to the GPA Calculation System\n");
	GPAcalc(degree,path,st_no);

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

void GPAcalc(int stdegree,int stpath, char stno[]){

	FILE *ofp;
    char myString[1000];
	char courses[5000];

    switch(stdegree){ //going to enter every character in following files to courses array
		case 1://PE
			switch(stpath){
				case 1://Path1


				// Open PEpath1.txt file in read mode
				ofp = fopen("PEpath1.txt", "r");

				if (ofp == NULL) {
					printf("File could not be opened.\n");
				}


				// Read and print each line from the file
				while (fgets(myString, sizeof(myString), ofp) != NULL) {
					strcat(courses, myString);
				}

				// Close the file
				fclose(ofp);
				break;

				case 2://Path2


				// Open PEpath2.txt file in read mode
				ofp = fopen("PEpath2.txt", "r");

				if (ofp == NULL) {
					printf("File could not be opened.\n");
				}


				// Read and print each line from the file
				while (fgets(myString, sizeof(myString), ofp) != NULL) {
					strcat(courses, myString);
				}

				// Close the file
				fclose(ofp);
				break;



		}break;

		case 2://ECS
			// Open coursesECS.txt file in read mode
			ofp = fopen("coursesECS.txt", "r");



			if (ofp == NULL) {
				printf("File could not be opened.\n");
			}


			// Read and print each line from the file
			while (fgets(myString, sizeof(myString), ofp) != NULL) {
				strcat(courses, myString);
			}

			// Close the file
			fclose(ofp);
			break;

		default:
		//printf("end of file func\n");
		break;
}

// ///////////////////// GPA CALCULATION//////////////////////////////////////////////////////////////////

    char *token = strtok(courses, "\n"); // Tokenize based on newline(\n character) Adding each new line in to a pointer vaible
	int count=0;
	float GPA,tottemp=0.0;

    while (token != NULL) { //checks if the new line is empty


        int last = strlen(token);//determine no of characters in the token

        //printf("%c\n", token[last - 1]); // Print the last character of the token(credit value of an course)
        //printf("%s\n", token); //to check what is in token pointer variable

        int creditValue = atoi(&token[last - 1]); //getting last number of each course code as an integer
		count+=creditValue; //adding that number to get total of credits
		//printf("%d\n", creditValue); //to check credit value integer outputs

		const float gpv[]={4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.3,1.0,0.0};

		printf("Enter the grade obtained for %s:\n", token); //prints with each course code in tokens
		char grade[3];
		scanf("%s",&grade); //adding grade to a variable
		//printf("%s\n",grade);
		float temp=0.0;

		//check if user inputs invald characters for grades

		const char *validGrades[] = {"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "E"}; //pointer array to define valid grades
		int numValidGrades = sizeof(validGrades) / sizeof(validGrades[0]); //dividing whole size of array by a single size of an element gives the no of elements in the array

		// Check if the input is a valid grade by each character in above array
		int isValid = 0;
		for (int i = 0; i < numValidGrades; i++) {
			if (strcmp(grade, validGrades[i]) == 0) {
				isValid = 1; //passed the test
				break;
			}
		}

		if (isValid) { //this means 'if (isValid==1)'
			//printf("Valid grade: %s\n", grade);

			   if (strcmp(grade, "A+") == 0) {
        temp = gpv[0] * creditValue;
    } else if (strcmp(grade, "A") == 0) {
		temp = gpv[0] * creditValue;
    } else if (strcmp(grade, "A-") == 0) {
		temp = gpv[1] * creditValue;
    } else if (strcmp(grade, "B+") == 0) {
		temp = gpv[2] * creditValue;
    } else if (strcmp(grade, "B") == 0) {
		temp = gpv[3] * creditValue;
    } else if (strcmp(grade, "B-") == 0) {
		temp = gpv[4] * creditValue;
    } else if (strcmp(grade, "C+") == 0) {
		temp = gpv[5] * creditValue;
    } else if (strcmp(grade, "C") == 0) {
		temp = gpv[6] * creditValue;
    } else if (strcmp(grade, "C-") == 0) {
		temp = gpv[7] * creditValue;
    } else if (strcmp(grade, "D+") == 0) {
		temp = gpv[8] * creditValue;
    } else if (strcmp(grade, "D") == 0) {
		temp = gpv[9] * creditValue;
    } else if (strcmp(grade, "E") == 0) {
		temp = gpv[10] * creditValue;

    }

		tottemp += temp; //stores the calculated grade point value with respective credit value
		token = strtok(NULL, "\n"); // Get the next token based on newline(go to line down in opened txt file)

	}else {
        printf("Invalid grade:\nRe-enter Grade for %s\n", token); //show which course to re enter

    }

	}

	GPA = GPAprint(tottemp, count);
    printf("GPA is %.2f\n", GPA);

	//Adding the calculated GPAs toa txt file
	FILE *efp;

	// Open a file in append mode
	efp = fopen("Calculated_GPAs.txt", "a");

	if (efp == NULL) {
				printf("File could not be opened.\n");


			}

	// Append following text to the file
	fprintf(efp,"GPA of %s is %.2f\n",stno,GPA);

	// Close the file
	fclose(efp);



}
float GPAprint(float tt, int c) {
    return tt / (float)c;
}



