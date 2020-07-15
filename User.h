//
//  User.hpp
//  ESE224 Final
//
//  Created by Nasratullah Sultany on 11/30/17.
//  Copyright © 2017 Nasratullah Sultany. All rights reserved.
//

#ifndef User_h
#define User_h

#include <iostream>
#include <string>
using namespace std;

class User {
    public:

        // constructors
        User();
        User(string newuser, string newpassword);

        // accessors and mutators
        string get_username();
        string get_password();
        void set_username(string newusername);
        void set_password(string newpassword);

        // print info
        void print_user();
    
    private:
        string username;
        string password;
    
};

#endif
