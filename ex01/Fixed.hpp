/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:38:29 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/23 14:49:27 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
	
	public:
							Fixed();
							Fixed(const Fixed &copy);
		Fixed				&operator=(const Fixed &copy);
							Fixed(const int value);
							Fixed(const float value);
							~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif