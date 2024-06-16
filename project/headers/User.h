//
// Created by gonca on 03/06/2024.
//

#ifndef FSOFT2024_1DC_5_USER_H
#define FSOFT2024_1DC_5_USER_H

using namespace std;

class User{
protected:
    string username;
    string password;
    string name;
    User();
    User(string& pUsername, string& pPassword);
    void setUsername(string& pUsername);
public:
    virtual string getUsername() const;
    void setName(string pName);
    void setPassword(string& pPassword);

    string getPassword();
    string getName();

};

#endif //FSOFT2024_1DC_5_USER_H
