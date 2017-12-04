#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class book
{
public:

book();

string reTitle();
string reAuth();
string reDate();

int reDateNumb();
int reOrder();

void chTitle(string ntitle);
void chAuth(string nauth);
void chDate(string ndate);
void chOrder(int nOrder);

private:

string author;
string title;
string date;
int numbDate; //unused
int orderNumb;  //unused

};

#endif // BOOK_H
