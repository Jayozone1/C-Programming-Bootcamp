#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 200
#define MAX_STUDENTS 100
#define FILE_NAME "student.dat"

typedef struct data {

	int id; //The student's unique identifier
	char Name[MAX_NAME_LENGTH]; //Stores the student's Name up to 50 characters
	int age; //Stores the student's age
	char Address[MAX_ADDRESS_LENGTH]; //Stores the student's address(up to 200 characters)
	float CGPA; //Assuming CGPA can have decimal places. 
	
} Data;

void printData(Data dt)
{
	printf("id = %d, Name = %s, age = %d, Address = %s, CGPA = %.2f\n", dt.id, dt.Name, dt.age, dt.Address, dt.CGPA);

}

Data inputData()
{
	Data dt;
	printf("Enter the id: ");
	scanf("%d", &dt.id);

	printf("Enter the Name: ");
	scanf("%s", &dt.Name);
	
	printf("Enter the Age: ");
	scanf("%d", &dt.age);


	printf("Enter the Address: ");
	getchar(); //Clear the newline character from the buffer
	fgets(dt.Address, MAX_ADDRESS_LENGTH, stdin);
	
	printf("Enter the CGPA: ");
	scanf("%f", &dt.CGPA);
	
	return dt;
}

void saveToFile(Data students[], int count) {
	FILE *file = fopen(FILE_NAME, "wb"); //write binary
	if (!file ) {
		perror("Error opening file for writing");
		return;
	}

	fwrite(students, sizeof(Data), count, file); //Write all records
	fclose(file);
	printf("Data saved successfully. \n");
 }

 int loadFromFile(Data students[]) {
	FILE *file = fopen(FILE_NAME, "rb"); //Read binary
	if (!file) {
		perror("Error opening file for reading");
		return 0; // No data loaded
	}

	int count = fread(students, sizeof(Data), MAX_STUDENTS, file); // Read all records
	fclose(file);
	printf("Data loaded sucessfully. Total records: %d\n", count);
	return count;
 }

void displayAllRecords(Data students[], int count)
{
	if (count == 0) {
		printf("No records to display. \n");
		return;
	}

	for (int i = 0; i < count; i++) {
		printf("Record %d:\n", i + 1);
		printData(students[i]);
	}
}
void updateStudentRecord(Data students[], int count)
{
	int id;
	printf("Enter the ID of the student to update: ");
	scanf("%d", &id);

	for (int i = 0; i < count; i++) {
		if (students[i].id == id) {
			printf("Current record: \n");
			printData(students[i]);
			printf("Enter new details: \n");
			students[i] = inputData();
			printf("Record updated successfully. \n");
			return;
		}
	}
	printf("No students with ID %d found. \n ", id);
}
 void deleteStudentRecord(Data students[], int *count) {
	int id;
	printf("Enter the ID of the student to delete: ");
	scanf("%d",  &id);

	for(int i = 0; i < *count; i++) {
		if (students[i].id == id) {
			//shift remaining records left
			for (int j = i; j < *count -1 ; j++){
				students[j] = students[j + 1];
			}
			(*count)--;
			printf("Record with ID %d deleted sucessfully. \n", id);
			return;
		}
	}
	printf("No student with ID %d found. \n", id);


 }

int main()
{
	Data students[MAX_STUDENTS];
	int studentCount = 0, choice;

	// Load existing data from file
	studentCount = loadFromFile(students);


	while (1) {
		printf("\n Menu: \n");
		printf("\n1. Add Student \n2. Display All Students \n3. Update Student Record \n4. Delete Student Record \n5. Save and Exit \n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1: 
				if (studentCount < MAX_STUDENTS) {
					students[studentCount++] = inputData(); 
				} else {
					printf("Maximum student limit reached! \n");
				}
				break;
			case 2: 
				displayAllRecords(students, studentCount);
				break;
			case 3:
				updateStudentRecord(students, studentCount);
				break;
			case 4:
				deleteStudentRecord(students, &studentCount);
				break;
			case 5:
				saveToFile(students, studentCount);
				return 0; //Exit the program
			default:
				printf("Invalid choice! Try again. \n");
		}
	}
	
	
	
	//Data studentrecord;
	//studentrecord = inputData(); //calls inputData() to populate studentrecord with user input.
	//printData(studentrecord); //calls printData() to display the contents of the student record.
	
	return 0;
}
