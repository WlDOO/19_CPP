/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:30:07 by najeuneh          #+#    #+#             */
/*   Updated: 2025/04/01 18:54:56 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
template<typename T>
typename T::iterator easyfind(T container, int number)
{
    typename T::iterator it;
        it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw  "Error : end find";
    return it;
}

