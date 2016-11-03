#include <iostream>
#include <string>
#include "Author class.cpp"
using namespace std;

class Book
{
	private:
		string name;
		double price;
		Author author;
		int qty;
	public:
		Book();
		Book(string, Author, double);
		Book(string, Author, double, int);
		string getName();
		Author getAuthor();
		double getPrice();
		int getQty();
		void setPrice(double);
		void setQty(int);
		string toString();
};

Book::Book()
{
	
};

Book::Book(string nameList, Author auth, double priceList)
{
	name = nameList;
	author = auth;
	price = priceList;
}

Book::Book(string nameList, Author auth, double priceList, int quantity)
{
	name = nameList;
	author = auth;
	price = priceList;
	qty = quantity;
}

string Book::getName()
{
	return (name);
}

 Author Book::getAuthor()
 {
 	return (author);
 }

	double Book::getPrice()
	{
		return (price);
	}
	int Book::getQty()
	{
		return (qty);
	}
	
	void Book::setPrice(double priceList)
	{
		price = priceList;
	}
	
	void Book::setQty(int quantity)
	{
		qty = quantity;
	}
	
	string Book::toString()
	{
		return (name) + (author.toString()) + to_string(price) + to_string(qty); 
	}

int main()
{
	Author ega("Ega ", "erertttt@gmail.com ", 'm');
	Book data(" Roots", ega, 33.09, 32);
	
	cout<< data.toString() ;
	return 0;
}
