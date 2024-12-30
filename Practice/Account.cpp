#include "Account.h"
#include <iostream>

// Default constructor
Account::Account() : data(0) {
    std::cout << "No args constructor called\n";
}

// Parameterized constructor
Account::Account(int value) : data(value) {
    std::cout << "Parameterized constructor called\n";
}

// Copy constructor
Account::Account(const Account& source) : data(source.data-1) {
    std::cout << "Copy constructor called\n";
}

// Getter for data
int Account::getData() const {
    return data;
}

// Setter for data
void Account::setData(int value) {
    data = value;
}

// Display method
void Account::display() const {
    std::cout << "Data: " << data << std::endl;
}
