#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>


class BitcoinExchange
{
	private:
		std::map<std::string, float> data;
		bool readFlag;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &oth);
		BitcoinExchange &operator=(const BitcoinExchange &oth);
		void setData(std::string date, float value);
		void readInput(std::string inputPath);
		std::map<std::string, float> getData();
		std::vector<std::string> splitString(std::string str, char delimiter);
};

#endif