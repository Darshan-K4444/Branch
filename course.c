#include <stdio.h>
int main() 
{
    int choice;
    printf("Choose a course to display:\n");
    printf("1. B.Tech CSE\n");
    printf("2. B.Tech AIML\n");
    printf("3. B.Tech ECE\n");
    printf("4. B.Tech MEC\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("You selected: B.Tech CSE\n");
	     printf("You selected: B.Tech CSE\n");
                printf("You selected: B.Tech CSE\n");
            break;
	    case 2:
            printf("You selected: B.Tech AIML\n");
            break;
	    case 3:
            printf("You selected: B.Tech ECE\n");
            break;
	    case 4:
            printf("You selected: B.Tech MEC\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
   printf("You selected: B.Tech CSE\n");
 return 0;
}


