#include <cstring>
#include <iostream>
#include "Mystring.h"
using namespace std;

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
     : str{nullptr} {
        str = new char[std::strlen(source.str )+ 1];
        std::strcpy(str, source.str);
}


//copy assignment
Mystring&Mystring::operator=(const Mystring &rhs)
{
    cout<<"Copy Assignment"<<endl;

    if(this==&rhs)
    {
        return *this;
    }

    delete [] this->str;

    str=new char[strlen(rhs.str)+1];
    strcpy(this->str,rhs.str);
    return *this;


}

//move assignment
Mystring&Mystring::operator=(Mystring &&rhs)
{
    cout<<"Move Assignment"<<endl;

    if(this==&rhs)
    {
        return *this;
    }

    delete [] this->str;

    this->str=rhs.str;
    rhs.str=nullptr;
    return *this;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }
 
  // string getter
 const char *Mystring::get_str() const { return str; }



//Unary Operator - Overloading
Mystring Mystring::operator-() const {
    char *buff=new char[std::strlen(this->str) +1];
    std::strcpy(buff,this->str);
    for(size_t i=0;i<std::strlen(buff);i++)
    {
        buff[i]=std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;

}

bool Mystring::operator==(const Mystring&rhs) const{
    if(std::strcmp(this->str,rhs.str)==0){
        return true;
    }else{
        return false;
    }
}

Mystring Mystring::operator+(const Mystring&rhs) const{
    size_t buff_size=std::strlen(this->str)+std::strlen(rhs.str)+1;
    char*buff=new char[buff_size];
    std::strcpy(buff,this->str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete[]buff;
    return temp;
}