/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:29:24 by sleon             #+#    #+#             */
/*   Updated: 2023/05/29 16:29:25 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack(){
	std::cout<<"MutantStack constructor called"<<std::endl;
}

MutantStack::MutantStack(MutantStack const &toCopy){
	if (this != &toCopy)
		*this = toCopy;
	std::cout<<"MutantStack copy constructor called"<<std::endl;
}

MutantStack::~MutantStack(){
	std::cout<<"MutantStack destructor called"<<std::endl;
}

MutantStack& MutantStack::operator=(MutantStack const &toCopy){

	return (*this);
}

