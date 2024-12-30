#pragma once
#include <iostream>

class Account {
private:
    int data; // Private member variable

public:
    // No args constructor
    Account();

    // Parameterized constructor
    Account(int value);

    // Copy constructor
    Account(const Account& source);

    // Getter for data
    int getData() const;

    // Setter for data
    void setData(int value);

    // Method to display data
    void display() const;
};
