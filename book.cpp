#include "book.h"
#include <sstream>
#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;


book::book()
{
}


string book::reTitle()
{
	return title;
}
string book::reAuth()
{
	return author;
}
string book::reDate()
{
	return date;
}

int book::reDateNumb()
{
	return numbDate;
}

int book::reOrder()
{
	return orderNumb;
}

void book::chTitle(string ntitle)
{
	title = ntitle;
	return;
}
void book::chAuth(string nauth)
{
	author = nauth;
	return;
}
void book::chDate(string ndate)
{
	stringstream tempstream;
	
	
	
	date = ndate;
	//tempstream << ndate;							//attempt at catching when date was not an int, but stringstream would not work
	//tempstream.str(ndate);
	/*while (!(tempstream >> numbDate))
	{
		tempstream.ignore(1000, EOF);
		tempstream.clear();
		cout << "Invalid date, please retry" << endl;
		cin >> date;
		tempstream << date;
	}*/
	
	//tempstream >> numbDate;
	return;
}

void book::chOrder(int nOrder)
{
	orderNumb = nOrder;
	return;
}

