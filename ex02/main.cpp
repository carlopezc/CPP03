/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:29:10 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/13 11:34:52 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\033[1;34m--- 1. PROBANDO CONSTRUCTORES ---\033[0m" << std::endl;
    FragTrap fraggy("Fraggy");
    std::cout << std::endl;
    
    // Probamos constructor por defecto
    FragTrap nobody; 

    std::cout << "\n\033[1;34m--- 2. PROBANDO ATAQUE Y DAÑO ---\033[0m" << std::endl;
    // FragTrap NO redefinió attack(), así que debe salir el mensaje de "ClapTrap ... attacks"
    // Pero el daño debe ser 30 (lo definiste en el constructor)
    fraggy.attack("Target Dummy");
    
    // Simulamos que recibe daño
    fraggy.takeDamage(20);
    
    // Se repara (debe tener energía de sobra, empieza con 100)
    fraggy.beRepaired(10);

    std::cout << "\n\033[1;34m--- 3. PROBANDO HABILIDAD ESPECIAL (HIGH FIVES) ---\033[0m" << std::endl;
    fraggy.highFivesGuys();

    std::cout << "\n\033[1;34m--- 4. PROBANDO FORMA CANÓNICA (COPIAS) ---\033[0m" << std::endl;
    // Constructor de copia
    std::cout << ">> Creando 'clone' a partir de 'fraggy'..." << std::endl;
    FragTrap clone(fraggy);
    
    // Operador de asignación
    std::cout << ">> Asignando 'clone' a 'nobody'..." << std::endl;
    nobody = clone;

    std::cout << "\n\033[1;34m--- 5. DESTRUCTORES (Orden Inverso) ---\033[0m" << std::endl;
    // El orden de destrucción debe ser: FragTrap -> ClapTrap
    return (0);
}