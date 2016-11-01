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
	
//	Author::string toString()
// 	{
 //		return "Author[name = nameList, email = emailList, gender = gen]";
 //	}
	
int main()
{
	Author data("Dan Brown", "1345dan@gmail.com", 'm');
	
//	string
		
	return 0;
}
