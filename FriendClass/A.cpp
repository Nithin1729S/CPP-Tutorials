#include "A.h"

int A::count = 0;

A::A() {
    count++;
}

A::~A() {
    count--;
}

void A::get_name() const {
    std::cout << "Name: " << name << std::endl;
}

void A::set_name(std::string name) {
    this->name = name;
}

void A::get_count() {
    std::cout << "No of A objs: " << count << std::endl;
}
