/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:19:30 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 13:24:14 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif