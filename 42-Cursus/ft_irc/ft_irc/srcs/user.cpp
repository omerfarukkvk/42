#include "../includes/user.hpp"

User::User(int fd)
{
    this->fd = fd;
}

User::~User()
{
}

int User::getFd()
{
    return this->fd;
}

std::string User::getNickName()
{
    return this->nick;
}

std::string User::getUserName()
{
    return this->username;
}

void User::setNickName(std::string nick)
{
    this->nick = nick;
}

void User::setUserName(std::string username)
{
    this->username = username;
}