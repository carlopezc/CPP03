/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:26:19 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 12:27:08 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_EnergyPoints = other._EnergyPoints;
        this->_HitPoints = other._HitPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is already dead" << std::endl;
        return ;
    }
    if (static_cast<int>(amount) >= this->_HitPoints)
        this->_HitPoints = 0;
    else
        this->_HitPoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " has been attacked with " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    {
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->_Name << " has been repaired with " << amount << " hit points!" << std::endl;
    }
    else if (this->_HitPoints <= 0)
        std::cout << "ClapTrap " << _Name << " is dead and cannot act." << std::endl;
    else
        std::cout << "ClapTrap " << _Name << " has no energy." << std::endl;
}