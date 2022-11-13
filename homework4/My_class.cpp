#include <iostream>
#include <string>
#include <vector>

#include "Declaration.hpp"

void v_mol(const Gas & g)	//  вычисление молярного объёма
{
	std::cout << "Molar volume of " << g.m_name << " is " << g.m_volume/g.nu() << " l/mol" << std::endl;
}

void mass(const Gas & g)	// масса газа
{
	std::cout << "The mass of " << g.m_name <<  " is " << g.m_molar_mass*g.nu() << " g" << std::endl;
}

double Gas::nu() const	// количество вещества газа,	моль						
{		
	return m_pressure * m_volume / (R * m_temperature);
} 

std::ostream& operator<< (std::ostream& stream, const Gas& x)
{
	stream << x.m_name << std::endl;
	return stream;
}

int main()
{	
	Gas O2("oxygen", 32, 1.0, 100.0, 273);
	Gas HCl("hydrogen chloride", 36.5, 1.0, 101.325, 298);
	
	std::cout << O2;
	v_mol(O2);
	mass(O2);
	
	O2.set_temperature(1000);
	v_mol(O2);
	mass(O2);
	
	std::cout << std::endl;
	
	std::cout << HCl;
	v_mol(HCl);
	mass(HCl);
	
	system("pause");
	
	return 0;
}