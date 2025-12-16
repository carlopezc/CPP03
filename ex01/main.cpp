/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:15:38 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 13:22:06 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- CREANDO ROBOTS ---" << std::endl;
    ScavTrap robot1("S1");
    ScavTrap robot2;

    std::cout << "\n--- PROBANDO ACCIONES ---" << std::endl;
    robot1.attack("Target A");
    robot1.guardGate();
    
    robot1.takeDamage(50);
    robot1.beRepaired(20);

    std::cout << "\n--- DESTRUYENDO ROBOTS ---" << std::endl;
    return (0);
}