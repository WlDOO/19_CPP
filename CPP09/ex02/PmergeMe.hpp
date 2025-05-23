/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:42:53 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/22 16:52:20 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <deque>
#include <time.h>
#include <algorithm>

void	PmergeMe(char **str);
template<typename T>
void	sortlist(T& cont, T &loser);
template<typename T>
void	sortinsert(T& winner, T& loser);
template<typename T>
int	findpos(T Winner, int find);
template<typename T>
void	Jacobsthal(size_t n, T& sequence)
;
