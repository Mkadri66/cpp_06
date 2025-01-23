/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:39:35 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 16:09:44 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base::~Base() {}

Base*	Base::generate(void) {

	int	randomNb = rand() % 3;
	Base*	base;

	if (randomNb == 0)
		return base = new A();
	else if (randomNb == 1)
		return base = new B();
	else if (randomNb == 2)
		return base = new C();
	else {
		std::cout << "random function failed" << std::endl;
		return NULL;
	}
}

void	Base::identify(Base* p) {
    try {
        if (dynamic_cast<A*>(p))
            std::cout << "Base type: A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "Base type: B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "Base type: C" << std::endl;
        else
            std::cout << "type is unknown" << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Base::identify(Base& p) {
	
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "Base type: A" << "\n";
		else if (dynamic_cast<B *>(&p))
			std::cout << "Base type: B" << "\n";
		else if (dynamic_cast<C *>(&p))
			std::cout << "Base type: C" << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Base::UnknownTypeException::what() const throw() {
	return "type is unknown";
}