/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:15:38 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/13 11:16:16 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- CREANDO ROBOTS ---" << std::endl;
    ScavTrap robot1("S1");
    ScavTrap robot2;

    std::cout << "\n--- PROBANDO ACCIONES ---" << std::endl;
    robot1.attack("Target A"); // Debería decir "ScavTrap... attacks"
    robot1.guardGate();
    
    // Probamos que hereda cosas de ClapTrap
    robot1.takeDamage(50);
    robot1.beRepaired(20);

    std::cout << "\n--- DESTRUYENDO ROBOTS ---" << std::endl;
    return (0);
}