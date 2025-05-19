/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:14:53 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/19 14:19:30 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	CheckDate(std::string str)
{
	std::stringstream ss(str);
	std::string year;
	std::string month;
	std::string day;
	bool isBis;
	
	if (!std::getline(ss, year, '-') || !std::getline(ss, month, '-') || !std::getline(ss, day))
		return false;
	int	y = atoi(year.c_str());
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());
	if (year.size() < 4)
		return false;
	if (m < 1 || m > 12)
		return false;
	isBis = (y % 4 == 0  && (y % 100 != 0 || y % 400 == 0));
	if (m == 2 && (d > 29 || (d == 29 && !isBis)))
	{
		return false;
	}	
	if (day.size() < 2 || d < 1 || d > 31)
		return false;
	if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
		return false;
	return true;
}

bool CheckValue(std::string str)
{
	int value;

	value = atof(str.c_str());
	if (value < 0 || value > 1000)
		return false;
	return true;
}

std::map<std::string, float>	Checkcsv(void)
{
	std::ifstream file;
	std::string line;
	std::string date;
	std::string val;

	file.open("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Error: file cant not be open" << std::endl;
		exit(1);
	}
	std::map<std::string, float> map;
	std::getline(file, line, '\n');
	while(std::getline(file, line, '\n'))
	{
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, val);
		map[date] = atof(val.c_str());
	}
	return map;
}

std::string ispace(std::string str)
{
	size_t pos = str.find_first_not_of(" \t\n\r\f\v");
	if (pos == std::string::npos)
		return "";
	size_t pos2 = str.find_last_not_of(" \t\n\r\f\v");
	return str.substr(pos, (pos2 - pos + 1));
}

void	Checkinput(std::map<std::string, float> map, std::string str)
{
	std::ifstream file;
	std::string line;
	std::string	date;
	std::string	val;

	file.open(str.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: file cant not be open" << std::endl;
		exit(1);
	}
	std::getline(file, str, '\n');
	while (std::getline(file, line, '\n'))
	{
		std::size_t found = line.find_first_not_of("0123456789. |-\t\n\r\f\v");
		if (found != std::string::npos)
		{
			std::cout << "Error: not possible character" << std::endl;
			continue;
		}
		std::stringstream ss(line);
		if (!std::getline(ss, date, '|') || !std::getline(ss, val))
		{
			std::cout << "Error: bad input" << std::endl;
			continue;
		}
		if (!CheckDate(date))
		{
			std::cout << "Error: the format of the date is not good" << std::endl;
			continue;
		}
		if (!CheckValue(val))
		{
			if (atof(val.c_str()) < 0)
			{
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		date = ispace(date);
		val = ispace(val);
		std::map<std::string, float>::iterator it = map.lower_bound(date);
		if (it->first != date)
		{
			if (it == map.begin())
			{
				std::cout << "Error: this date is not possible" << std::endl;
				continue;
			}
				it--; 
		}
		std::cout << date << " => " << val << " = " << atof(val.c_str()) * it->second << std::endl;
	}
}