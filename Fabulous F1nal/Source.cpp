#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include 'cl4sses.h'
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
	cout << "Please enter the number of students who will be testing. \n";
	cin >> Numb3rofStudents; 
	cout << "And how many questions will this particular test contain? \n";
	cin >> Numb3rofQuestions;
	cout << "Please enter the answer key for the " << Numb3rofQuestions << " questions. \n";
	
	for (int a = 0; a < Numb3rofQuestions; a++)
	{
		cout << "Answer of question " << a << " : \n";
		cin >> Answ3rK3y[a]; 
	}

	// cout << "To sumbit a student's set of answers, first enter their respective ID number, proceeded by their choices. \n";

	cout << "Student " << IDNumb3r << " imputted " << C0rr3ctCount << " out of " << Numb3rofQuestions << " questions; \n";
	cout << "Student " << IDNumb3r << " recieved a score of " << IndividualAverag3 << " percent. \n";
	cout << "For test number " << T3st /*class*/ << " the class average came to be " << Average << endl; 
	cout << "For this test, " << StudentsPass3d << " students recieved a grade of 60% or above. \n";     

		return 0;
}