#include <iostream>
#include <string>
#include <cmath>
#include "Stud3nts.h"

using namespace std;

int Stud3nts::getIDNumb3r()
{
	return IDNumb3r;
}

void Stud3nts::setIDNumb3r(int newID)
{
	IDNumb3r = newID;
}

int Stud3nts::getNumberAnswersCorrect()
{
	return TotalNumberAnswerCorrect;
}

void Stud3nts::setNumberAnswersCorrect(int newNumbCorrect)
{
	TotalNumberAnswerCorrect = newNumbCorrect;
}

char * Stud3nts::Ans(int num)
{
	cout << "Input students' test answers \n";
	pointArr = new char[num];
	char x;
	for (int i = 0; i < num; i++)
	{
		cin >> x;
		pointArr[i] = x;
	}
	return pointArr;
}

int Stud3nts::compareAns(char *pointer, char *correctAnswerPointer, int num)
{
	numberAnsCorrect = 0;
	for (int i = 0; i < num; i++)
	{
		if (pointer[i] == correctAnswerPointer[i])
		{
			TotalNumberAnswerCorrect++;
			numberAnsCorrect++;
		}
	}
	return numberAnsCorrect;
}

void Stud3nts::Avg(int size)
{
	double avg = 0;
	avg = (double(numberAnsCorrect) / size) * 100;
	cout << "The average is: " << avg << endl;

}

char * Stud3nts::getAns(int size)
{
	char* pointArr2 = new char[size];
	for (int i = 0; i < size; i++)
	{

		pointArr2[i] = pointArr[i];
	}
	return pointArr2;
}

int Stud3nts::getNumAnsCorrect()
{
	return numberAnsCorrect;
}