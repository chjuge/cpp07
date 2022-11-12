/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:59:33 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 15:37:29 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
using std::cout;
using std::endl;
using std::string;

template <typename T>
void iter(T *adress, int len, void (*(funct))(T const &))
{
	for (int i = 0; i < len; i++)
		funct(adress[i]);
}

template <typename T>
void p_t(T const &t)
{
    cout << t << endl;
}

#endif
