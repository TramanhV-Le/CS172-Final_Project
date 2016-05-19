#ifndef T3st_H_
#define T3st_H_

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
	char * getCorr3ctAns(int size);
};

#endif