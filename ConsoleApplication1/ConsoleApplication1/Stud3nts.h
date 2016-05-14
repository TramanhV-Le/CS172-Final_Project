#ifndef Stud3nts_H_
#define Stud3nts_H_
class Stud3nts
{
private:
	int IDNumb3r;
	int TotalNumberAnswerCorrect = 0;
	char * pointArr;
	int numberAnsCorrect;

public:
	int getIDNumb3r();
	void setIDNumb3r(int newID);
	int getNumberAnswersCorrect();
	void setNumberAnswersCorrect(int newNumbCorrect);
	char *Ans(int num);
	int compareAns(char *pointer, char *correctAnswerPointer, int num);
	void Avg(int size);
	char *getAns(int size);
	int getNumAnsCorrect();

};

#endif