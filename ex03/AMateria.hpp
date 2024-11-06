/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:07:28 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:17:00 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>

class ICharacter;

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class AMateria {
	class Registry;

	static const std::string	& c_type;

protected:
	AMateria			(void);
	AMateria			(				const AMateria &);
	// Wear your PPE: Privacy Prevents Erosion! ~~lgasc 2024-10-25 22:21
	AMateria			& operator = (	const AMateria &);
public:
	virtual ~ AMateria	(void); // `public` for use by `Character`

protected:
	//[...]

public:
	AMateria	(const std::string & type);
	//[...]

	///Returns the materia type
	const std::string	& getType(void) const WARN_UNUSED_RESULT;

	virtual const AMateria	*clone(void) const WARN_UNUSED_RESULT = 0;
	virtual void			use(const ICharacter & target) const;

private:
	void	ft_register(	void) const;
	void	ft_deregister(	void) const;

	virtual const std::string	& ft_virtual_type(void)
	const WARN_UNUSED_RESULT = 0;
};
#endif
