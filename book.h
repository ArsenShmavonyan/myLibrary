#ifndef BOOK_HPP
#define BOOK_HPP
class Book
{
public:
	Book(const std::string&, const std::string&);
public:
	Book& operator=(const Book&);
private:
	std::string m_title;
	std::string m_autor;
};
#endif // BOOK_HPP
