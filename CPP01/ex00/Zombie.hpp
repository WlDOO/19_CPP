/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:04:29 by najeuneh          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:03 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
class Zombie {
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string& name);
        ~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif