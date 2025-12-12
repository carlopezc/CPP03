/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:26:14 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/12 22:28:51 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Carlota");
    ClapTrap claptrap2(claptrap);
    claptrap.attack("Aitor");
    claptrap.takeDamage(4);
    claptrap.beRepaired(5);
    claptrap2.attack("Carlota");
    claptrap2.takeDamage(20);
    claptrap2.beRepaired(1);
    return (0);
}