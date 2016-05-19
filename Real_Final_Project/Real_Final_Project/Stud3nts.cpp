// MATTHIAS: all the nam3$ that ar3 alph-numerically styled
// McKENNA and VINA: Proper grammar and spelling.

#include <iostream>
#include <string>
#include <cmath>
#include "Stud3nts.h"

using namespace std;

// Assessors for students allows functions to be returned
int Stud3nts::getIDNumb3r()
{
	return IDNumb3r;
}

void Stud3nts::setIDNumb3r(int newID) // Mutator allows the ID number to change for students.
{
	IDNumb3r = newID;
}

int Stud3nts::getNumberAnswersCorrect() // Assessor to return and display the total number of answers 
{
	return TotalNumberAnswerCorrect;
}

void Stud3nts::setNumberAnswersCorrect(int newNumbCorrect)
{
	TotalNumberAnswerCorrect = newNumbCorrect; // Mutator allows the number correct to change
}

char * Stud3nts::Ans(int num)
{
	cout << "Input students' test answers: \n";
	pointArr = new char[num]; // Using allocated array to increment all student's answers

	char x;
	for (int i = 0; i < num; i++) // Asks for the specific number of answers
	{
		cin >> x;
		pointArr[i] = x;
	}
	return pointArr;
}

int Stud3nts::compareAns(char *pointer, char *correctAnswerPointer, int num)
{
	numberAnsCorrect = 0; // Individual test counter for the students
	for (int i = 0; i < num; i++)
	{
		if (pointer[i] == correctAnswerPointer[i]) // Points will increase based on the match of answers to Key
		{
			TotalNumberAnswerCorrect++;
			numberAnsCorrect++;
		} // Hope we get at least a B
	}
	return numberAnsCorrect;
}

void Stud3nts::Avg(int size) // Size: total number of questions on test
{
	double avg = 0;
	avg = (double(numberAnsCorrect) / size) * 100; // Multiply by 100 to output a percentage
	cout << "The average is: " << avg << endl; // Outputs the avetage grade after each test

} // We really hope we get a good score

char * Stud3nts::getAns(int size)
{
	char* pointArr2 = new char[size]; // Allocated array
	for (int i = 0; i < size; i++)
	{

		pointArr2[i] = pointArr[i]; // Calculates the next test in sequence.
	}
	return pointArr2;
}

int Stud3nts::getNumAnsCorrect()
{
	return numberAnsCorrect;
}