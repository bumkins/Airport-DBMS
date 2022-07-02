// C program for the airport
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create Structure of airport
struct airport{
	char plane_name[20];
	char plane_no[20];
	int seats;
	float price;
};

// Driver Code
int main()
{
	// Create a instance
	struct airport a[100];

	char pl_name[30], pl_no[30];

	// Keep the track of the number of
	// of plane available in the airport
	int i, input, count;

	i = input = count = 0;

	// Iterate the loop
	while (input != 5) {

		printf("\n\n********###### WELCOME TO AIRPORT MANAGEMENT SYSTEM #####********\n");
		printf("\n\n1. Add book information\n2. Display plane information\n");
		printf("3. List all plane\n");
		printf("4. List the count of plane in the airport\n");
		printf("5. Exit");

		// Enter the plane details
		printf("\n\nEnter one of "
			"the above: ");
		scanf("%d", &input);

		// Process the input
		switch (input) {

		// Add plane info
		case 1:

			printf("Enter plane name = ");
			scanf("%s", a[i].plane_name);

			printf("Enter a plane no = ");
			scanf("%s", a[i].plane_no);

			printf("Enter seats = ");
			scanf("%d", &a[i].seats);

			printf("Enter price = ");
			scanf("%f", &a[i].price);
			count++;

			break;

		// Print plane information
		case 2:
			printf("you have entered the following information\n");
			for (i = 0; i < count; i++) {

				printf("Plane name = %s",a[i].plane_name);

				printf("\tPlane no = %s",a[i].plane_no);

				printf("\t Seats = %d",a[i].seats);

				printf("\t price = %f",a[i].price);
			}
			break;

		// Take the plane name as input
		case 3:
    printf("Enter plane name : ");
    scanf("%s", pl_name);
			for (i = 0; i < count; i++) {
        if (strcmp(pl_name,a[i].plane_name)== 0)
					printf("%s %s %d %f",a[i].plane_name,a[i].plane_no,a[i].seats,a[i].price);
			}
			break;

		// Print total count
		case 4:
			printf("\n No of plane in airport : %d",count);
			break;
		case 5:
			exit(0);
		}
	}
	return 0;
}
