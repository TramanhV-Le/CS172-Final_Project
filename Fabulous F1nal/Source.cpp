#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "cl4ssQu3stions.h"
#include "cl4ssStud3nts.h"
#include "cl4ssT3sts.h"
#include "cl4ssCl4ssAverage.h"
using namespace std;


int main()
{
	int C0rr3ctCount = 0;
	int Numb3rofStudents;
	int Numb3rofQuestions;
	int IDNumb3r; 
	double Average;
	float IndividualAverag3; 
	vector <char> Answ3rK3y;
	cout << "Welcome to the easy, automatic grader program! \n";
	cout << "What test (1-3) is to be graded? \n";
	
/*	switch (1)
	{
	case 1: cin >> T3sts.T1;
		cout << "You've selected test one. \n";
		cout << "Please enter the number of students who will be testing. \n";
		cin >> T1.Numb3rofStudents;
		cout << "And how many questions will this particular test contain? \n";
		cin >> T1.Numb3rofQuestions;
	case 2:	cin >> T3sts.T2;
		cout << "You've selected test two. \n";
		cout << "Please enter the number of students who will be testing. \n";
		cin >> T2.Numb3rofStudents;
		cout << "And how many questions will this particular test contain? \n";
		cin >> T2.Numb3rofQuestions;
	case 3:	cin >> T3sts.T3;
		cout << "You've selected test three. \n";
		cout << "Please enter the number of students who will be testing. \n";
		cin >> T3.Numb3rofStudents;
		cout << "And how many questions will this particular test contain? \n";
		cin >> T3.Numb3rofQuestions;
	}
*/
	
	cout << "Please enter the answer key for the " << Numb3rofQuestions << " questions. \n";
	
	for (int a = 0; a < Numb3rofQuestions; a++)
	{
		cout << "Answer of question " << a << " : \n";
		cin >> Answ3rK3y[a]; 
	}

	// cout << "To sumbit a student's set of answers, first enter their respective ID number, proceeded by their choices. \n";

	cout << "Student " << IDNumb3r << " imputted " << C0rr3ctCount << " out of " << Numb3rofQuestions << " questions; \n";
	cout << "Student " << IDNumb3r << " recieved a score of " << IndividualAverag3 << " percent. \n";
	cout << "For test number " << T3sts.T1 << " the class average came to be " << Average << endl; 
	cout << "For this test, " << StudentsPass3d << " students recieved a grade of 60% or above. \n";     

		return 0;
}