#ifndef cl4sses_H_
#define cl4sses_H_

template<typename T>
class Qu3stions
{
private:
	int Position; // Represents the position to questions
	char Answer; // Represents the corresponding letter answer to question
public:
	T Correct4nswer(char);
	T Correct4nswer(Answer, Position);
	//impliment template in header// 
	T Options();
	int getPosition();
	char getAnswer();
	void setPosition();
	void setAnswer();
};

class T3sts
{
private:
	class Qu3stions;
	int Numb3rofQuestions;
	char
public:
	Answ3rK3y(int);
};

class Stud3nts
{
private:
	class T3sts;
	int IDNumb3r;
	int NumberAnswerCorrect;
public:
	float Av3rageGrade(int);
	bool C0mparetoK3y();
	int C0rr3ctCount(class);
	int IndividualGrad3();
	char Inputted4nswers();
	int Numb3rofT3sts();
};

class Cl4ssAverage
{
private:
	int Answ3rK3y;
	double Average;
	int Numb3rofStudents;
	int Numb3rofTests;
public:
	double C0mput3Average();
	float Ind1vidualAverag3();
	int SumofT3sts();
};
#endif

template<typename T>
inline T Qu3stions<T>::Correct4nswer(char)
{
	return T();
}

template<typename T>
inline T Qu3stions<T>::Correct4nswer(Answer, Position)
{
	return T();
}

template<typename T>
inline T Qu3stions<T>::Options()
{
	return T();
}

