#include <stdio.h>
int main() 
{
    int choice;
    printf("Choose a course to display:\n");
    printf("1. B.Tech CSE\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("You selected: B.Tech CSE\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
  
    return 0;
}

