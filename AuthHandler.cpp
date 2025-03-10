#include "AuthHandler.h"

void AuthHandler::registerUser(string username, string name, string password)
{
    for(User* user : users) {
        if(user->getUsername() == username) {
            throw UserAlreadyExistsException();
        }
    }

    User* newUser = new User(name, username, password);
    users.push_back(newUser);
}

User* AuthHandler::loginUser(string username, string password)
{
    for(User* user : users) {
        if(user->getUsername() == username) {
            hash<string> hashCalc;
            if(user->getPasswordHash() == hashCalc(password)) {
                return user;
            } else {
                throw InvalidCredentialsException();
            }
        }
    }

    throw InvalidCredentialsException();
}
