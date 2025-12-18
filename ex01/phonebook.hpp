#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int     nextIndex;
    int     count;

public:
    PhoneBook();

    void addContact();
    void search() const;

private:
    void printTable() const;
    void printContact(int index) const;
};

#endif
