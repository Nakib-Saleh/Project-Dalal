#pragma once

#include <vector>
#include "User.h"

class AuthHandler {
private:
    vector<User*> users;

    class UserAlreadyExistsException {};
    class InvalidCredentialsException {};
public:
    void registerUser(string username, string name, string password);
    User* loginUser(string username, string password); 
};