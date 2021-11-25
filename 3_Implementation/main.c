#include "feature.h"
#include <stdio.h>
#include <string.h>
int Flame = 0;
char line_user_numbers[4][10] = {"E", "E", "E", "E"};
int line_state[4] = {1, 0, 0, 0};
int getInputChoice(int choice);
int getLineNumber(int line_no);
int is_password_matching(int password, int line);
int getLineOperation(int ch);
int getLineState(int line);
void respondToOperation(int operation, int line, char curr_user_num[])
{
    printf("\n");
    int line_curr_state = getLineState(line);
    if (operation == 1)
    {
        if (line_curr_state == 1)
            printf("Line-%d is already in Power On state", line);
        else
        {
            if (line_user_numbers[line - 1][0] == 'E' || strcmp(curr_user_num, line_user_numbers[line - 1]) == 0)
            {
                printf("SUCCESS: Line-%d is Successfully Turned On!!!", line);
                line_state[line - 1] = 1;
                line_user_numbers[line - 1][0] = 'E';
            }
            else
                printf("Line-%d is Turned Off by another user. Wait until he/she turns on.", line);
        }
    }
    else if (operation == 2)
    {
        if (line_curr_state == 0)
        {
            if (strcmp(curr_user_num, line_user_numbers[line - 1]) == 0)
                printf("Line-%d is already Turned Off by you.", line);
            else
                printf("Line-%d is already Turned Off by another user.", line);
        }
        else
        {
            line_state[line - 1] = 0;
            strcpy(line_user_numbers[line - 1], curr_user_num);
            printf("SUCCESS: Line-%d is successfully Turned Off!!!\n", line);
            printf("Note: Line-%d can be turned on again only using your number(%s).", line, line_user_numbers[line - 1]);
        }
    }
    else
    {
        if (line_curr_state == 1)
        {
            printf("Status: Line-%d - Turned On", line);
        }
        else
        {
            printf("Status: Line-%d - Turned Off", line);
            if (strcmp(line_user_numbers[line - 1], curr_user_num) == 0)
                printf(" by you");
            else if (line_user_numbers[line - 1][0] != 'E')
                printf(" by another user");
        }
    }
    printf("\n");
}

void main()
{
    int choice, line_no, verify_line_no, ch1;
    printf("LINE BREAKER PROGRAM");
    while (1)
    {
        printf("------------------------------------------\n");
        printf("\nWelcome To Line Breaker\n");
        printf("\nEnter '1' -> To Start\n");
        printf("Enter '0' -> To Exit\n");
        printf("Enter Your Choice :  ");
        scanf("%d", &choice);
        ch1 = getInputChoice(choice);
        if (ch1 == 0)
        {
            printf("\nExiting From Line Breaker\n");
            break;
        }
        else if (ch1 == -1)
        {
            printf("\nERROR: Invalid Choice Entered. Please Enter a Valid Choice.\n");
            continue;
        }
        printf("\nEnter a number from 1 to 4 to get the connection with that line :  ");
        scanf("%d", &line_no);
        verify_line_no = getLineNumber(line_no);
        if (verify_line_no == 0)
        {
            printf("\nERROR: Invalid Line Number Entered. Reverting To Welcome Page.\n");
            continue;
        }

        int password;
        printf("Enter the password for Line-%d :  ", line_no);
        scanf("%d", &password);

        int check_password = is_password_matching(password, line_no);
        if (check_password == 0)
        {
            printf("\nERROR: Entered Password Is Not Matched with Line-%d. Reverting To Welcome Page.\n", line_no);
            continue;
        }
        printf("\nSUCCESS: Password Matched to Line-%d.\n", line_no);

        char curr_user_num[10];
        printf("\nEnter Your Mobile Number :  ");
        scanf("%s", curr_user_num);
        int ch;
        printf("\nEnter '1' --> To Power On Line\n");
        printf("Enter '2' --> To Power Off Line\n");
        printf("Enter '3' --> To Check Line Status\n");
        printf("Enter Your Choice For Operation :  ");
        scanf("%d", &ch);

        int operation = getLineOperation(ch);
        if (operation == 0)
        {
            printf("\nERROR. Invalid Operation Choice Entered. Reverting To Welcome Page.\n");
            continue;
        }

        respondToOperation(operation, line_no, curr_user_num);

        printf("\nThanks For Using Line Breaker!!!\n");
    }
}
