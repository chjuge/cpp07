/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:16 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 13:41:05 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <typename T>
void	swap( T &a, T &b )
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
const T	&min( const T &a, const T &b )
{
	return (a < b ? a : b);
}

template <typename T>
const T	&max( const T &a, const T &b )
{
	return (a > b ? a : b);
}

#endif
