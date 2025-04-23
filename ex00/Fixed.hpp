/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:50:55 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/23 14:18:44 by jidrizi          ###   ########.fr       */
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
							~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif