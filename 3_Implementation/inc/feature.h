/**
 * @file feature.h
 * @author Siddharth (you@domain.com)
 * @brief this is the header file for the project(ELECTRIC_LINE_BREAKER)
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FEATURE_H_
#define FEATURE_H_
/**
 * @brief Get the Input Choice object
 * 
 * @param choice 
 * @return int 
 */
int getInputChoice(int choice);
/**
 * @brief Get the Line Number object
 * 
 * @param line_no 
 * @return int 
 */
int getLineNumber(int line_no);
/**
 * @brief 
 * 
 * @param password 
 * @param line 
 * @return int 
 */
int is_password_matching(int password, int line);
/**
 * @brief Get the Line Operation object
 * 
 * @param ch 
 * @return int 
 */
int getLineOperation(int ch);
/**
 * @brief Get the Line State object
 * 
 * @param line 
 * @return int 
 */
int getLineState(int line);
#endif