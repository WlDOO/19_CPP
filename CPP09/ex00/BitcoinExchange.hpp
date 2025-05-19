/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:14:51 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/14 15:05:50 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <stdlib.h>

bool	CheckDate(std::string str);
std::map<std::string, float> Checkcsv(void);
void Checkinput(std::map<std::string, float> map, std::string str);
