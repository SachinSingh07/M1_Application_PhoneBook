/**
 * @file application.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef APPLICATION_H
#define APPLICATION_H

/* Included to allow users to call functions from math library if required */


/* strcture definition must be reused by the users in their code */

struct contact
{
	char name[20];
	unsigned long long mobile_no;
	char sex[10];
	char email[40];
	char address[20];

}s;


void add();
void display();
void search();
void update();
void delete();

#endif //#ifndef APPLICATION_H