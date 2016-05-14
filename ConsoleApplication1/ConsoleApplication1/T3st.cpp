#include <iostream>
#include <string>
#include <cmath>
#include "T3st.h"

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