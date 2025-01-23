/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:54:12 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 10:56:27 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cmath>

class ScalarConverter {

	private:
	ScalarConverter();
	
	public:

	ScalarConverter(ScalarConverter const& copy);
	~ScalarConverter();

	ScalarConverter&	operator=(ScalarConverter const& rhs);

	static void	convert(std::string const& toConvert);
};

#endif