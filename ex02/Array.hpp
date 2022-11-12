/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:41:10 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 17:06:08 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

template<typename T>
class Array
{
private:
	unsigned int _size;
	T *_array;

public:
	Array<T>(): _size(0), _array(new T[0])
	{
		cout << "Default constructor" << endl;
	}

	Array<T>(unsigned int const size): _size(size)
	{
		cout << "Constructor" <<endl;
		if (size < 0)
			throw std::overflow_error("Invalid size for an array");
		this->_array = new T[size];
	}
	
	Array<T>(Array<T> const &src)
	{
		cout << "Copy constructor" << endl;
		if (this == &src)
			return;
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];	
	}

	~Array<T>()
	{
		cout << "Destructor" << endl;
		delete [] this->_array;
	}

	Array<T> & operator =(Array<T> const & src)
	{
		cout << "Assignation operator" << endl;
		if (this == &src)
			return *this;
		delete [] this->_array;
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		return *this;
	}

	T &operator [](unsigned int const i) const
	{
		if (i >= this->_size || i < 0)
			throw std::overflow_error("Index is out of the range");
		return this->_array[i];
	}

	unsigned int size() const	{ return this->_size; }
};

template<typename T>
std::ostream & operator <<(std::ostream &stream, Array<T> const &src)
{
	for (unsigned int i = 0; i < src.size(); i++)
		stream << " " << src[i] << " ";
	
	return stream;
}

#endif
