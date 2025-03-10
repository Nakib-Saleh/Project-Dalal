#include "User.h"
#include <functional>

User::User(string name, string username, string password)
{
    this->name = name;
    this->username = username;

    hash<string> hashCalc;
    this->passwordHash = hashCalc(password);
}

string User::getUsername() const
{
    return username;
}

string User::getName() const
{
    return name;
}

int User::getPasswordHash() const
{
    return passwordHash;
}
