#include <stdio.h>

/**
 * main - call other functions
 *
 * Return: 0
 */

int main(void)
{
	typedef struct DOB
	{
		int day;
		int month;
		int year;
	}DOB;
	typedef struct NAME
	{
		char first[100];
		char mid[100];
		char last[100];
	}NAME;
	typedef struct  student
	{
		int no;
		NAME name;
		float fees;
		DOB date;
	}student;

	student std1 = {01, {"John", "Osama", "Clerk"}, 30.50, {01, 04, 2022}};
	printf("************* STUDENT DETAILS **************\n");
	printf("NAME: %s %s %s\n", std1.name.first, std1.name.mid, std1.name.last);
	printf("DOB: %d/%d/%d\n", std1.date.day, std1.date.month, std1.date.year);
	printf("SN: %d\n", std1.no);
	printf("FEES: %.2f\n", std1.fees);
	return (0);
}
