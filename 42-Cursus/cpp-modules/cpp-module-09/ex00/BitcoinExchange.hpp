#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <vector>
# include <iostream>
# include <fstream>


class BitcoinExchange
{
	private:
		std::map<std::string, float> data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &oth);
		BitcoinExchange &operator=(const BitcoinExchange &oth);
		void addPrivate(std::string);
		void compare(std::string);
		bool checkInput(std::string line);
		bool checkDate(std::string);
		void compareDate(std::string);
};

#endif