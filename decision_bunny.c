#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int menuChoice = 0;
    int minutes = 0;
    int trigger = 0;

    srand(time(NULL));

    printf("=== WELCOME TO DECISION-BUDDY ===\n");
    printf("The rapid tool to stop overthinking and start doing.\n\n");

    printf("What is blocking you right now?\n");
    printf("1. I am procrastinating (Launch 5-Min Concentration Challenge)\n");
    printf("2. I cannot choose between two things (Flip a Decision Coin)\n");
    printf("3. I need a quick motivation boost (Get Random Productivity Rule)\n");
    printf("Your choice: ");
    scanf("%d", &menuChoice);

    printf("\n-----------------------------------------\n");

    if (menuChoice == 1) {
        printf("Enter how many minutes you want to commit to your task (e.g., 5 or 20): ");
        scanf("%d", &minutes);
        printf("\n[ACTION REQUIRED] Set a timer for %d minutes on your phone NOW.\n", minutes);
        printf("Close all social media tabs and work until the timer rings.\n");
        printf("Do not aim for perfection, just focus on starting!\n");
    }
   
    else if (menuChoice == 2) {
        printf("Assign your options mentally (e.g., Option A = Work, Option B = Gym).\n");
        printf("Press 1 to flip the coin and let destiny decide: ");
        scanf("%d", &trigger);
       
        int result = rand() % 2;
       
        if (result == 0) {
            printf("\n[RESULT] It is HEADS! Go with your first option immediately.\n");
        } else {
            printf("\n[RESULT] It is TAILS! Go with your second option immediately.\n");
        }
        printf("Tip: If you feel disappointed with the result, it means you secretly wanted the other choice. Follow your gut!\n");
    }
   
    else if (menuChoice == 3) {
        int randomAdvice = rand() % 3;
       
        printf("[PRODUCTIVITY RULE OF THE DAY]\n");
        if (randomAdvice == 0) {
            printf("The 2-Minute Rule: If a task takes less than 2 minutes to do, do it right now.\n");
        } else if (randomAdvice == 1) {
            printf("Starting is 80%% of the work. Open your project file and look at it for just 120 seconds.\n");
        } else {
            printf("Write down your top 3 most important tasks for today. Cross out everything else.\n");
        }
    }
   
    else {
        printf("Invalid choice. Please rerun the program.\n");
    }

    printf("\n-----------------------------------------\n");
    printf("Thank you for using DecisionBuddy. Now close this terminal and get to work! :)\n");
   
    return 0;
}