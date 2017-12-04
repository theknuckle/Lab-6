#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "book.h" //class containing book data

bool sorter(book one, book two); //sorting modifier

int main ()
{
	vector <book> books(1); //vector of books in the library
	char uInput = 'a'; //input of user
	book tempbook; //a temporary book variable
	int index = 0; //acts as record of how many books have been inputted, used in multiple places
	while (uInput != '3') //quits program if temp == 3
	{
	cout << "Select from the following choices: " << endl;
	cout << "1. Add new book" << endl;
	cout << "2. Print listing sorted by author" << endl;
	cout << "3. Quit" << endl;
	
	cin.clear();

	cin.get(uInput);
	cin.clear();
	cin.ignore(1000,'\n');
	
	
		if (uInput == '1')
		{
			string buffer; //a temporary string to hold values to be inserted into the class
			
			cout << "Enter title:" << endl;
			cin >> buffer;
			books.resize(index + 1); //resizing of books vector to hold an additional book
			books[index].chTitle(buffer);
			cout << "Enter author:" << endl;
			cin >> buffer;
			books[index].chAuth(buffer);
			cout << "Enter date:" << endl;
			cin >> buffer;
			books[index].chDate(buffer);
			index++; //increase of index
		}
		else if (uInput == '2')
		{
			sort(books.begin(), books.end(), sorter); //sorts vector based on author
			cout << "The books entered so far, sorted alphabetically by author are:" << endl;
			for (int i = 0; i < index ; i++) //iterates through vector printing out each book
			{
				books[i].chOrder(i+1);
				cout << books[i].reAuth() << ". "
					 << books[i].reTitle() << ". "
					 << books[i].reDate() << ". " << endl;
			}
			cout << "Press enter to continue" << endl;
		}
		
		else 
		{
			cout << "Invalid input, please retry" << endl;
			cout << "Press enter to continue" << endl;
			
		}
	cin.get();
	}
	return 0;
}

bool sorter (book one, book two)
{
	return(one.reAuth() < two.reAuth()); //can be changed to other member functions to sort by other fields
}