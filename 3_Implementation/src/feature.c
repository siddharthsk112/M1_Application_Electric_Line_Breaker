#include"feature.h"
#include<string.h>
int passwords[4]={1234, 2341, 3412, 4123};
int line_state1[4] = {1, 0, 0, 0};
/**
 * @brief Get the Input Choice object
 * 
 * @param choice 
 * @return int 
 */
int getInputChoice(int choice)
{
    if(choice==0 || choice==1)
        return choice;
    return -1;
}
/**
 * @brief Get the Line Number object
 * 
 * @param line_no 
 * @return int 
 */
int getLineNumber(int line_no)
{
    if(line_no>0 && line_no<5)
        return line_no;
    return 0;
}
/**
 * @brief the check the password matching
 * 
 * @param password 
 * @param line 
 * @return int 
 */
int is_password_matching(int password, int line)
{
    if(password== passwords[line-1])
        return 1;
    return 0;
}
/**
 * @brief Get the Line Operation object
 * 
 * @param ch 
 * @return int 
 */
int getLineOperation(int ch)
{

    if(ch>0 && ch<4)
        return ch;
    return 0;
}
/**
 * @brief Get the Line State object
 * 
 * @param line 
 * @return int 
 */
int getLineState(int line)
{
    return line_state1[line-1];
}