#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "cl4sses.h"


using namespace std;

int T3sts::getNumb3rofQuestions()
{
	return Numb3rofQuestions;
}

void T3sts::setNumb3rofQuestions(int numofQuestions)
{
	Numb3rofQuestions = numofQuestions;
}

char T3sts::getAnswer()
{
	return Answer;
}

void T3sts::setAnswer(int Ans)
{
	Answer = Ans;
}

int T3sts::getPosition()
{
	return position;
}

void T3sts::setPostition(int Pos)
{
	position = Pos;
}

int T3sts::countTest()
{
	int x;
	x++;
	return x;
}

char * T3sts::correctAns(int num)
{
	cout << "Input test answer key: \n";
	 pointArr = new char[num];
	char x;
	for (int i = 0; i < num; i++)
	{
		cin >> x;
		pointArr[i] = x;
	}
	return pointArr;
}

char * T3sts::getCorrectAns(int size)
{
	char* pointArr2 = new char[size];
	for (int i = 0; i < size; i++)
	{
		
		pointArr2[i] = pointArr[i];
	}
	return pointArr2;
}



int Stud3nts::getIDNumb3r()
{
	return IDNumb3r;
}

void Stud3nts::setIDNumb3r(int newID)
{
	IDNumb3r = newID;
}

int &Stud3nts::getNumberAnswersCorrect()
{
	return NumberAnswerCorrect;
}

void Stud3nts::setNumberAnswersCorrect(int newNumbCorrect)
{
	NumberAnswerCorrect = newNumbCorrect;
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
	for (int i = 0; i < num; i++)
	{
		if (pointer[i] == correctAnswerPointer[i])
		{
			NumberAnswerCorrect++;
		}
	}
	return NumberAnswerCorrect;
}

void Stud3nts::Avg( int size)
{
	double avg =0 ;

	/*double sum = 0;
	for (int* current = numb; current < numb + size; current++)
	{
		sum += *current;
	}
	avg = sum / size;*/

	avg = (double (NumberAnswerCorrect) / size) * 100;
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
