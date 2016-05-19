#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
#include "Stud3nts.h"
#include "T3st.h"

using namespace std;

int main() {
	int numberofTest = 0; // Starts at 0 tests
	int numberofStudents = 0;
	int ID = 0; // ID can be any number or series of ints
	int NumofQu3stions = 0;
	int TotalNumberofQuestions = 0;
	double OverallGrade = 0; // Base average from zero.

	cout << "How many tests are being graded? "; // Prompts user for number of tests
	cin >> numberofTest;
	cout << endl;

	cout << "How many students took the test? "; // Prompts user for the number of students
	cin >> numberofStudents;
	cout << endl;

	Stud3nts  *newStud3nt = new Stud3nts[numberofStudents]; // Pointer allows user to input multiple students
	T3sts *newTest = new T3sts[numberofTest];
	for (int x = 0; x < numberofTest; x++)
	{
		cout << "How many questions are in the test? "; // Allows user to input multiple tests for each student
		cin >> NumofQu3stions;
		TotalNumberofQuestions = TotalNumberofQuestions + NumofQu3stions; //cl3v3r girl// 
		cout << endl;
		newTest[x].correctAns(NumofQu3stions); // New test answers will use counter to keep track of correct answers.

		for (int i = 0; i < numberofStudents; i++)
		{
			cout << "Input the students ID: "; // Asks for the students ID to keep track of their correct answers
			cin >> ID;
			newStud3nt[i].setIDNumb3r(ID);
			newStud3nt[i].Ans(NumofQu3stions);
			newStud3nt[i].compareAns(newStud3nt[i].getAns(NumofQu3stions), newTest[x].getCorr3ctAns(NumofQu3stions), NumofQu3stions);
			cout << "Student " << newStud3nt[i].getIDNumb3r() << " test score is: "; // Displays each individual student's grade
			cout << newStud3nt[i].getNumAnsCorrect() << endl;

		} // Please give us an 'A'
	}

	ofstream fout; // Outputs the students' answers into a text file
	fout.open("Overall Grade.txt");

	if (fout.fail())
	{
		cout << "can't open file" << endl; // If fail, app will display message
		return 0;
	}
	fout << "Student ID " << setw(15); // Includes the Student ID
	fout << " Overall Grade" << endl; // Displays their overall grade for all inputted tests.
	for (int i = 0; i < numberofStudents;i++) // This loop cycles through stud3nts, displaying their resp3ctive perc3ntage // 
	{
		fout << newStud3nt[i].getIDNumb3r();
		fout << setw(20);
		OverallGrade = (newStud3nt[i].getNumberAnswersCorrect() / double(TotalNumberofQuestions)) * 100; // Takes the percentage to show out of 100%
		fout << OverallGrade;
		fout << endl;
	}
	fout.close(); // Ends the text file
}