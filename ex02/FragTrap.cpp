/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:19:59 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 13:29:21 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_Name = "default";
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_EnergyPoints = other._EnergyPoints;
        this->_HitPoints = other._HitPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Give me five!" << std::endl;
}