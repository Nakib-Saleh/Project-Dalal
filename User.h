#pragma once

#include <string>

using namespace std;

class User {
private:
    string name;
    string username;
    int passwordHash;
public:
    string getUsername() const;
    string getName() const;
    int getPasswordHash() const;
    User(string name, string username, string password);
};