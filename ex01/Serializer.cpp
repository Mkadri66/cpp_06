/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:01:46 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 11:02:04 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const& copy) {
	*this = copy;
}

Serializer::~Serializer() {}

Serializer&	Serializer::operator=(Serializer const& rhs) {
	(void)rhs;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}