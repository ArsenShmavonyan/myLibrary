#include "book.h"
Book& Book::operator=(const Book& book);
        {
                this -> m_title = book.title;
                 this -> m_autor = book.autor;
        }
Book::Book(const std::string& str, const std::string& str2);
{
	m_title = str;
        m_autor = str2;
}

