#include <iostream>

class Energy
{
public:
	Energy(double v): m_value(v) {}
	
	void recording(double val)		// записываем Дж
	{
		m_value = val;
	}
	
	void recording_erg(double val)	// записываем эрг, переводим в Дж
	{
		m_value = val / J_to_erg;
	}
	
	void recording_eV(double val)	// записываем эВ, переводим в Дж
	{
		m_value = val / J_to_eV;
	}
	
	double reading()		// чтение энергии в Джоулях
	{
		return m_value;
	}
	
	double reading_erg()	// чтение энергии в эргах
	{
		return m_value * J_to_erg;
	}		
	
	double reading_eV()		// чтение энергии в электрон-Вольтах
	{	
		return m_value * J_to_eV;
	}

	friend std::ostream& operator<<(std::ostream& stream, const Energy & e);
	
private:
	double m_value;		// значение
	static constexpr double J_to_erg = 1.e7;	// 1 J = 10^7 erg
	static constexpr double J_to_eV = 6.242e18;	// 1 J = 6.242 * 10^18 eV
};

std::ostream& operator<< (std::ostream& stream, const Energy& x)
{
	stream << x.m_value;
	return stream;
}

int main()
{
	Energy e(1.0);
	
	double J = e.reading();
	std::cout << e << " J is " << J << "J" << std::endl;
	
	double erg = e.reading_erg();
	std::cout << e << " J is " << erg << "erg" << std::endl;
	
	double eV = e.reading_eV();
	std::cout << e << " J is " << eV << "eV" << std::endl;
	
	system("pause");
	
	return EXIT_SUCCESS;
}