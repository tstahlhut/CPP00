/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstahlhu <tstahlhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:16:59 by tstahlhu          #+#    #+#             */
/*   Updated: 2024/05/08 13:09:10 by tstahlhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is the header file for the ClapTrap Class

#ifndef _CLAPTRAP_HPP
# define _CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {

	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );	// Copy constructor
		~ClapTrap( void );					// Destuctor

		// Copy assignment operator overload
		ClapTrap &		operator=( ClapTrap const & rhs ); // current instance is updated with rhs instance
	
		std::string		getName( void ) const;
		unsigned int	getHealthHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		ClapTrap( void ); 					// Default constructor ( user should not be able to use it )

		std::string		_name;
		unsigned int	_health;	// Hit Points
		unsigned int	_energy;	// Energy Points
		unsigned int	_damage;	// Attack Damage
};


#endif