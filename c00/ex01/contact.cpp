#include "contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(std::string v) { first_name = v; }
void Contact::setLastName(std::string v) { last_name = v; }
void Contact::setNickname(std::string v) { nickname = v; }
void Contact::setNumber(std::string v) { number = v; }
void Contact::setSecret(std::string v) { darkest_secret = v; }

std::string Contact::getFirstName() const { return first_name; }
std::string Contact::getLastName() const { return last_name; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getNumber() const { return number; }
std::string Contact::getSecret() const { return darkest_secret; }
