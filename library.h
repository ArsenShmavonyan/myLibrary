#include "book.h"
#ifndef LIBRARY_H
#define LIBRARY_H
class Library
{
public:	
	Library();
public:
	void set_book(const Book&);
	void get_book(const Book&);
private:
	Book m_books[];
	int m_count;
};
#endif
