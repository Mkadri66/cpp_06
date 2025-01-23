/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:39:00 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 12:39:04 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Base {

	public:

	virtual ~Base();

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

	class UnknownTypeException : public std::exception {
		public:
		virtual const char* what() const throw();
	};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif