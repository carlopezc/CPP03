/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:46:49 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/13 11:15:23 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
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
        this->Name = other.Name;
        this->EnergyPoints = other.EnergyPoints;
        this->HitPoints = other.HitPoints;
        this->AttackDamage = other.AttackDamage;
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
    if (this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        this->EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->Name << " can't attack" << std::endl;
}