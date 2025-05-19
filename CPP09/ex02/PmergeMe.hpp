/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:42:53 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/19 16:22:40 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <deque>
#include <time.h>
void	PmergeMe(char **str);
template<typename T>
void	sortlist(T& cont);
template<typename T>
void	sortinsert(T& winner, T& loser);
template<typename T>
int	findpos(T Winner, int find);
template<typename T>
void	Jacobsthal(size_t n, T& sequence)
;
