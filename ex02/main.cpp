/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:29:10 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/16 13:31:41 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "1. PROBANDO CONSTRUCTORES ---\n" << std::endl;
    FragTrap fraggy("Fraggy");
    std::cout << std::endl;
    
    FragTrap nobody; 

    std::cout << "2. PROBANDO ATAQUE Y DAÑO ---\n" << std::endl;
    fraggy.attack("Target Dummy");
    
    fraggy.takeDamage(20);
    
    fraggy.beRepaired(10);

    std::cout << "3. PROBANDO HABILIDAD ESPECIAL (HIGH FIVES) ---\n" << std::endl;
    fraggy.highFivesGuys();

    std::cout << "4. PROBANDO FORMA CANÓNICA (COPIAS) ---\n" << std::endl;
    std::cout << ">> Creando 'clone' a partir de 'fraggy'...\n" << std::endl;
    FragTrap clone(fraggy);

    std::cout << ">> Asignando 'clone' a 'nobody'...\n" << std::endl;
    nobody = clone;

    std::cout << "5. DESTRUCTORES (Orden Inverso) ---\n" << std::endl;
    return (0);
}