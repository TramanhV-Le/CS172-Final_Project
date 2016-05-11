#ifndef cl4sses_H_
#define cl4sses_H_


class T3sts
{
private:
	int position;
	char Answer;
	int Numb3rofQuestions;

public:
	int getNumb3rofQuestions();
	void setNumb3rofQuestions(int numofQuestions);
	char getAnswer();
	void setAnswer(int Ans);
	int getPosition();
	void setPostition(int Pos);
	int countTest();
	char *correctAns(int num);
};

class Stud3nts
{
private:
	int IDNumb3r;
	int NumberAnswerCorrect = 0;

public:
	int getIDNumb3r();
	void setIDNumb3r(int newID);
	int getNumberAnswersCorrect();
	void setNumberAnswersCorrect(int newNumbCorrect);
	char *Ans(int num);
	int compareAns(char *pointer, char *correctAnswerPointer, int num);
	double Avg(int numb[], int size);
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
