/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:46:49 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 13:18:38 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Ddestructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_EnergyPoints = other._EnergyPoints;
        this->_HitPoints = other._HitPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return (*this);
    
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Scavtrap copy constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in the Gate keepeer mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_Name << " can't attack" << std::endl;
}