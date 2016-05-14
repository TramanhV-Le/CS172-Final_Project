#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
#include "Stud3nts.h"
#include "T3st.h"

using namespace std;

int main() {
	int numberofTest = 0;
	int numberofStudnets = 0;
	int ID = 0;
	int numofQuestions = 0;
	int TotalNumberofQuestions = 0;
	double OverallGrade = 0;

	cout << "How many test? ";
	cin >> numberofTest;
	cout << endl;

	cout << "How many students? ";
	cin >> numberofStudnets;
	cout << endl; 

	Stud3nts  *newStudent = new Stud3nts[numberofStudnets];
	T3sts *newTest = new T3sts[numberofTest];
	for (int x = 0; x < numberofTest; x++)
	{
		cout << "How many Questions? ";
		cin >> numofQuestions;
		TotalNumberofQuestions = TotalNumberofQuestions + numofQuestions;
		cout << endl;
		newTest[x].correctAns(numofQuestions);

		for (int i = 0; i < numberofStudnets; i++)
		{
			cout << "Input the students ID\n";
			cin >> ID;
			newStudent[i].setIDNumb3r(ID);
			newStudent[i].Ans(numofQuestions);
			newStudent[i].compareAns(newStudent[i].getAns(numofQuestions), newTest[x].getCorrectAns(numofQuestions), numofQuestions);
			cout << "Student " << newStudent[i].getIDNumb3r() << " test score is: ";
			cout << newStudent[i].getNumAnsCorrect() << endl;
			
		}
	}
	
	ofstream fout;
	fout.open("Y.txt");

	if (fout.fail())
	{
		cout << "can't open file" << endl;
		return 0;
	}
	fout << "Student ID " << setw(15);
	fout << " Overall Grade" << endl;
	for (int i = 0; i < numberofStudnets;i++)
	{
		fout << newStudent[i].getIDNumb3r();
		fout << setw(20);
		OverallGrade = (newStudent[i].getNumberAnswersCorrect() / double(TotalNumberofQuestions)) * 100;
		fout << OverallGrade;
		fout << endl;
	}
	fout.close();
}