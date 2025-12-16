/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:26:14 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 12:40:14 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- CREACION ---" << std::endl;
    ClapTrap robot("Wall-E");
    ClapTrap copia(robot);

    std::cout << "\n--- PRUEBA DE ATAQUE Y ENERGIA ---" << std::endl;
    for (int i = 0; i < 11; i++) {
        robot.attack("Target Dummy");
    }

    std::cout << "\n--- PRUEBA DE REPARACION SIN ENERGIA ---" << std::endl;
    robot.beRepaired(5);

    std::cout << "\n--- PRUEBA DE DAÑO Y MUERTE ---" << std::endl;
    copia.takeDamage(5);
    copia.takeDamage(50);
    copia.takeDamage(10);

    std::cout << "\n--- PRUEBA DE ACCION ESTANDO MUERTO ---" << std::endl;
    copia.attack("Zombie");
    copia.beRepaired(10);

    std::cout << "\n--- DESTRUCCION ---" << std::endl;
    return 0;
}