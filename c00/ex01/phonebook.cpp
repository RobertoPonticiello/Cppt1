#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>   // per std::atoi

/* ================= CONSTRUCTOR ================= */

PhoneBook::PhoneBook() : nextIndex(0), count(0) {}

/* ================= ADD CONTACT ================= */

void PhoneBook::addContact()
{
    Contact     c;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    c.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    c.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    c.setNickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    c.setNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    c.setSecret(input);

    contacts[nextIndex] = c;

    nextIndex = (nextIndex + 1) % 8;
    if (count < 8)
        count++;
}

/* ================= SEARCH ================= */

void PhoneBook::search() const
{
    std::string input;
    int         index;

    if (count == 0)
    {
        std::cout << "PhoneBook is empty.\n";
        return;
    }

    printTable();

    std::cout << "Index: ";
    std::getline(std::cin, input);

    index = std::atoi(input.c_str());

    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index\n";
        return;
    }

    printContact(index);
}

/* ================= PRINT TABLE ================= */

static std::string formatField(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::printTable() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First" << "|"
              << std::setw(10) << "Last" << "|"
              << std::setw(10) << "Nick" << "\n";

    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << "\n";
    }
}

/* ================= PRINT CONTACT ================= */

void PhoneBook::printContact(int index) const
{
    std::cout << "First name: " << contacts[index].getFirstName() << "\n";
    std::cout << "Last name: " << contacts[index].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[index].getNickname() << "\n";
    std::cout << "Phone: " << contacts[index].getNumber() << "\n";
    std::cout << "Secret: " << contacts[index].getSecret() << "\n";
}

/* ================= MAIN ================= */

int main()
{
    PhoneBook  pb;
    std::string cmd;

    while (true)
    {
        std::cout << "ADD | SEARCH | EXIT\n> ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
            pb.addContact();
        else if (cmd == "SEARCH")
            pb.search();
        else if (cmd == "EXIT")
            break;
    }
    return 0;
}
