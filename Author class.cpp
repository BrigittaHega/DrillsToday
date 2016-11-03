#include <iostream>
#include <string>
using namespace std;

class Author
{
	private:
		string name;
		string email;
		char gender;
	public:
		Author();
		Author(string, string, char);
		//Accessor
		string getName();
		string getEmail();
		char getGender();
		//Mutator
		void setEmail(string);
	//	virtual  const string toString();
		string toString();		
};
	Author::Author ()
	{
	
	};

	Author::Author (string nameList, string emailList, char gen)
	{
		name = nameList;
		email = emailList;
		gender = gen;
	}
	
	string Author::getName()
	{
		return (name);
	}
	string Author::getEmail()
	{
		return (email);
	}
	char Author::getGender()
	{
		return(gender);
	}
	
	void Author::setEmail(string emailList)
	{
		email = emailList;
	}
	
	string Author::toString()
 	{
		return (name) + (email) + (gender);
	}
/*	
int main()
{
	Author data = {"Dan Brown\n", "1345dan@gmail.com\n", 'm'};
	
	cout<<data.toString();
//	string
		
	return 0;
}*/
