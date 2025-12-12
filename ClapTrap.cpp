/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:26:19 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/12 22:25:35 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->EnergyPoints = other.EnergyPoints;
        this->HitPoints = other.HitPoints;
        this->AttackDamage = other.AttackDamage;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
    
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        this->EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " can't attack" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    std::cout << "ClapTrap " << this->Name << " has been attacked with " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        this->HitPoints += amount;
        this->EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->Name << " has been repaired with " << amount << " hit points!" << std::endl;
    }
    else
    std::cout << "ClapTrap " << this->Name << " can't be repaired " << std::endl;
}