#include "B.h"
#include "A.h"

int B::count = 0;

B::B() {
    count++;
}

B::~B() {
    count--;
}

void B::get_name() const {
    std::cout << "Name: " << name << std::endl;
}

void B::set_name(std::string name) {
    this->name = name;
}

void B::get_count() {
    std::cout << "No of B objs: " << count << std::endl;
}

void B::ruin_A(A &src) {
    src.name = "SHIT"; // Corrected access
}
