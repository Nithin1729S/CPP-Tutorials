#include "Account.h"
#include "Account.cpp"

int main() {
    // Default constructor
    Account acc1;
    acc1.setData(42);
    acc1.display();

    // Parameterized constructor
    Account acc2(100);
    acc2.display();

    // Copy constructor
    Account acc3(acc1); // Copy acc2 to acc3
    acc3.display();

    
    return 0;
}
