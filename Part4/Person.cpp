#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
    cout << "Person object created(" << name << ")" << endl;
}

Person::~Person() // destructor
{
    cout << "Person object removed(" << name << ")" << endl;
    delete[] name;
    delete[] addr;
}

void Person::print() const
{
    cout << addr << "에 사는" << name << "입니다" << endl;
}

void Person::chAddr(const char* newAddr)
{
    delete[] addr;
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr);
}