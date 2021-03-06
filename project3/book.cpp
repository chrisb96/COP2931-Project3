//
//  book.cpp
//  project3
//
//  Created by Chris Becker on 4/11/17.
//  Copyright © 2017 Chris Becker. All rights reserved.
//

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include "book.h"

using namespace std;

Book::Book() {
    //underscores for class variables (easy way to know the difference)
    
    _title[0] = '\0'; //nullifies character array to initialize it
    _author[0] = '\0';
    _bookID = 0;
    _cardID = 0;
}

Book::Book(char title[], char author[], int bookID) {
    _bookID = bookID;
    _cardID = 0;
    strncpy(_title, title, TITLE_SIZE);
    strncpy(_author, author, AUTHOR_SIZE);
}

/*
 Get Book ID
 @ returns book ID
 */

int Book::getBookID() {
    return _bookID;
}



/**
 Get Card ID

 @return Card ID
 */
int Book::getCardID() {
    return _cardID;
}

/**
 Set Card ID

 @param cardID Card ID
 */
void Book::setCardID(int cardID) {
    _cardID = cardID;
}

/**
 Print Title
 */
void Book::printTitle() {
    cout << _title;
}

/**
 Print Author
 */
void Book::printAuthor() {
    cout << "Written by: " << _author;
}

/**
 Print Book Information
 */
void Book::print() {
    cout << _bookID << ": "<< _title  << " "<< _author 
         << ((_cardID == 0 ) ? " not Checked out" : " checked out to card" + to_string(_cardID)) //to_string() turns it into a string
    << endl;
}

