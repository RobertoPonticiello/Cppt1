#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string darkest_secret;

public:
    Contact();

    void setFirstName(std::string v);
    void setLastName(std::string v);
    void setNickname(std::string v);
    void setNumber(std::string v);
    void setSecret(std::string v);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getNumber() const;
    std::string getSecret() const;
};

#endif
