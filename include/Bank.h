#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <vector>

// std::vector<std::string> usernames; // a vector for save all of accounts names
// bool is_Empty = true;
class customer
{
private:
    std::string username;         // account username
    int card_number;              // a four digit number
    long int opening_date;        // not sure about its type
    long int expiration_date;     // not sure about its type
    unsigned long int balance;    // account balance
    std::string ip;               // first ip of account
    std::vector<std::string> ips; // account ips
    // class transaction;           // account transaction
public:
    customer(std::string, std::string);
    ~customer();
    class transaction; // account transaction
    std::string get_username();
    void set_ip(std::string);
    void ip_validation(std::string);
    void set_opening_date(int);
    void check_expiration_date_for_renewal();
    void set_expiration_date(int);
    unsigned long int get_balance();
    void set_balance(unsigned long int);
    int get_expiration_date();
    int get_opening_date();
    void check_expiration_date_for_transaction();
    bool get_ips(std::string);
};

unsigned int convert(std::string &);
unsigned int convert(char &);
void add_ip(std::string, std::vector<customer> &, std::string);
void renewal(std::vector<customer> &, size_t &);
customer check_existance_account(std::vector<customer> &, std::string);
void withdraw(customer &, unsigned int &);

// class MyException : public std::exception
// {
// public:
//     MyException(const char *);
// };
#endif
