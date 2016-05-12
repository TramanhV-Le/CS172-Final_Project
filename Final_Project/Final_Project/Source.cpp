#include <iostream>
#include "cl4sses.h"
#include <string>

using namespace std;

int main()
{
	T3sts T1;
	T1.setNumb3rofQuestions(5);	
	Stud3nts S1;
	cout << S1.compareAns(S1.Ans(5), T1.correctAns(5),5);

	int y = S1.getNumberAnswersCorrect;
	cout << S1.compareAns(S1.Ans(5), T1.correctAns(5), 5);
	int z = S1.getNumberAnswersCorrect;
	int x[2] = { y,z };
	int* pointArr = new int[2];
	for (int i = 0; i < 2; i++)
	{
		pointArr[i] = x[i];
	}
	S1.Avg(pointArr, 2);
}