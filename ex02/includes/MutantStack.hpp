/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:29:21 by sleon             #+#    #+#             */
/*   Updated: 2023/05/29 16:53:22 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <cmath>


template	<typename	T>
class MutantStack
{
	private:

	public:

		MutantStack();
		MutantStack(MutantStack const &copy);
		~MutantStack();

		MutantStack &operator=(MutantStack const &toCopy);

};

#endif
