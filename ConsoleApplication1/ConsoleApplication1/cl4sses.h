#pragma once
#ifndef cl4sses_H_
#define cl4sses_H_


class T3sts
{
private:
	int position;
	char Answer;
	int Numb3rofQuestions;
	char * pointArr;

public:
	int getNumb3rofQuestions();
	void setNumb3rofQuestions(int numofQuestions);
	char getAnswer();
	void setAnswer(int Ans);
	int getPosition();
	void setPostition(int Pos);
	int countTest();
	char *correctAns(int num);
	char * getCorrectAns(int size);
};

class Stud3nts
{
private:
	int IDNumb3r;
	int NumberAnswerCorrect = 0;
	char * pointArr;

public:
	int getIDNumb3r();
	void setIDNumb3r(int newID);
	int &getNumberAnswersCorrect();
	void setNumberAnswersCorrect(int newNumbCorrect);
	char *Ans(int num);
	int compareAns(char *pointer, char *correctAnswerPointer, int num);
	void Avg( int size);
	char *getAns(int size);

};

class Cl4ssAverage
{
private:

	int Answ3rK3y;
	double Average;
	int Numb3rofStudents;
	int Numb3rofTests;
public:

	/*double C0mput3Average(int x, int y);
	float Ind1vidualAverag3(int x);
	int SumofT3sts(int y);*/

};
#endif
