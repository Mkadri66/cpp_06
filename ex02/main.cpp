/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:38:28 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 15:56:43 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

int	main() {

	srand(time(0));
	Base	base;
	Base*	test1 = NULL;
	Base*	test2 = NULL;
	Base*	test3 = NULL;

	std::cout << "Tests by pointers with NULL :" << std::endl;
	base.identify(test1);
	base.identify(test2);
	base.identify(test3);	

	test1 = base.generate();
	test2 = base.generate();
	test3 = base.generate();

	std::cout << std::endl;
	std::cout << "Tests by pointers :" << std::endl;
	base.identify(test1);
	base.identify(test2);
	base.identify(test3);

	std::cout << std::endl;
	std::cout << "Tests by references :" << std::endl;
	base.identify(*test1);
	base.identify(*test2);
	base.identify(*test3);

	delete test1;
	delete test2;
	delete test3;

	return 0;
}