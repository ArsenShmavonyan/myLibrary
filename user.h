#include "book.cpp"
#ifndef user_h
#define user_h
class Student 
{
public:
	Student(const std::string& name);
public:
	void read(const Book& book);
private:
	std::string m_name;
	Book m_books[];
	int m_age;
};
#endif
