#ifndef USER_HPP
# define USER_HPP

# include <iostream>
# include <vector>

class User
{
    private:
        int fd;
        std::string nick;
        std::string username;
    public:
        User(int fd);
        ~User();

        int getFd();
        std::string getNickName();
        std::string getUserName();

        void setNickName(std::string nick);
        void setUserName(std::string username);
};

#endif