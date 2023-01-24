#include "library.h"

Library::Library {
		m_count = count;
}
void Library::get_book(const Book& book)
{
                for (int i = 0; i < m_count; ++i)
                {
                        if (m_books[i].m_title == book.m_title)
                        {
                                return m_books[i];
                        }
                }
                return;
}
void Library::set_book(const Book& book)
         {
                 m_book[m_count] = book;
                 ++m_count;
      }


