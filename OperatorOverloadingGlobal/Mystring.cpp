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



bool operator==(const Mystring&lhs,const Mystring&rhs){
    return (std::strcmp(lhs.str,rhs.str)==0);
}

Mystring operator-(const Mystring&obj){
    char *buff=new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(size_t i=0;i<std::strlen(buff);i++)
    {
        buff[i]=std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete []buff;
    return temp;
}

Mystring operator+(const Mystring&lhs,const Mystring&rhs){
    char *buff=new char[std::strlen(lhs.str) + std::strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;

}

///insertion
std::ostream& operator<<(std::ostream&os,const Mystring&rhs){
    os<<rhs.str;
    return os;
}


//extraction
std::istream& operator>>(std::istream&is,Mystring&rhs){
    char *buff=new char[1000];
    is>>buff;
    rhs=Mystring{buff};
    delete[] buff;
    return is;
}