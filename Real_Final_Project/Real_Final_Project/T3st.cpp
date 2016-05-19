#include <iostream>
#include <string>
#include <cmath>
#include "T3st.h"

using namespace std;

int T3sts::getNumb3rofQuestions() // Assessors
{
	return Numb3rofQuestions;
}

void T3sts::setNumb3rofQuestions(int numofQuestions) // Mutators
{
	Numb3rofQuestions = numofQuestions;
}

char T3sts::getAnswer() // Assessors
{
	return Answer;
}

void T3sts::setAnswer(int Ans) // Mutators
{
	Answer = Ans;
}

int T3sts::getPosition() // Assessors
{
	return position;
}

void T3sts::setPostition(int Pos) // Mutators
{
	position = Pos;
}

int T3sts::countTest() // Counts the numbers of tests that needs grading
{
	int x;
	x++;
	return x;
}

char * T3sts::correctAns(int num)
{
	cout << "Input test answer key: \n"; // Asks user to input the answer key
	pointArr = new char[num]; // Number tells the app how many different answer options there are
	char x;
	for (int i = 0; i < num; i++)
	{
		cin >> x; // x represents the char the answer is supposed to be
		pointArr[i] = x;
	}
	return pointArr;
} // We are really hoping for an A for this project

char * T3sts::getCorr3ctAns(int size)
{
	char* pointArr2 = new char[size]; // Assessors allows user to store multiple test's answer keys.
	for (int i = 0; i < size; i++)
	{

		pointArr2[i] = pointArr[i]; // Stores this into another array to compare with the next set of student answers
	}
	return pointArr2;
}
// Thanks for your continued support.