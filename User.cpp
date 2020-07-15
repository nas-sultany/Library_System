//
//  User.cpp
//  ESE224 Final
//
//  Created by Nasratullah Sultany on 11/30/17.
//  Copyright © 2017 Nasratullah Sultany. All rights reserved.
//

#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User() {
    username = "defaultuser";
    password = "password123";
}

User::User(string newuser, string newpassword) {
    username=newuser;
    password=newpassword;
}

string User::get_username() {
    return username;
}

string User::get_password() {
    return password;
}

void User::set_username(string newusername) {
    username=newusername;
}

void User::set_password(string newpassword) {
    password=newpassword;
}

void User::print_user() {
    cout << "Username: " << username << "\nPassword: " << password << endl;
}
