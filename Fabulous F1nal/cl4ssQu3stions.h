#ifndef cl4ssQu3stions_H_
#define cl4ssQu3stions_H_

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