/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:43:10 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/19 17:06:47 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void sortlist(T &cont)
{
	if (cont.size() < 2)
		return;

	T winner;
	T loser;
	for (size_t i = 0; i < (cont.size() - (cont.size() % 2)); i += 2)
	{
		int a = cont[i];
		int b = cont[i + 1];
		int tmp = 0;

		if (a < b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		winner.push_back(a);
		loser.push_back(b);
	}
	if (cont.size() % 2)
		winner.push_back(cont[cont.size() - 1]);
	sortlist(winner);
	cont.clear();
	sortinsert(winner, loser);
	cont.assign(winner.begin(), winner.end());
}

template <typename T>
void sortinsert(T &winner, T &loser)
{
	T jacob;
	Jacobsthal(loser.size(), jacob);
	size_t last = 0;

	for (size_t j = 0; j < jacob.size(); ++j)
	{
		size_t group_size = jacob[j] - last;
		for (size_t i = 0; i < group_size && (last + i) < loser.size(); i++)
		{
			int pos = findpos(winner, loser[last + i]);
			winner.insert(winner.begin() + pos, loser[last + i]);
		}
		last += group_size;
	}
}

template <typename T>
int findpos(T winner, int find)
{
	if (!winner.size())
		return (0);

	int a = 0;
	int b = winner.size() - 1;
	int pos = 0;
	while (a <= b)
	{
		pos = a + (b - a) / 2;
		if (winner[pos] > find)
			b = pos - 1;
		else if (winner[pos] < find)
			a = pos + 1;
		else
			return (pos);
	}
	return (a);
}
void PmergeMe(char **str)
{
	std::vector<int> vector;
	std::deque<int> list;
	for (int y = 1; str[y]; y++)
	{
		for (int i = 0; str[y][i] != '\0'; i++)
		{
			if (!isdigit(str[y][i]))
			{
				std::cout << "Error: not a number" << std::endl;
				return;
			}
		}
		vector.push_back(atoi(str[y]));
		list.push_back(atoi(str[y]));
	}
	std::cout << "Before:	";
	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	clock_t start = clock();
	sortlist(vector);
	clock_t end = clock();
	std::cout << "After:	";
	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	double time = static_cast<double>(end - start);
	std::cout << std::endl
			  << "Time to process a range of " << vector.size() << " elements with std::vector : " << time << " us" << std::endl;
	start = clock();
	sortlist(list);
	end = clock();
	time = static_cast<double>(end - start);
	std::cout << "Time to process a range of " << list.size() << " elements with std::deque : " << time << " us" << std::endl;
}

template <typename T>
void Jacobsthal(size_t n, T &sequence)
{
	sequence.push_back(0);
	if (n == 0)
		return;
	sequence.push_back(1);
	if (n == 1)
		return;
	for (size_t i = 2; i <= n; i++)
	{
		int j = sequence[i - 2] + sequence[i - 1];
		sequence.push_back(j);
	}
}