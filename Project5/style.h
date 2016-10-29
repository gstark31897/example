#ifndef H_STYLE
#define H_STYLE

#include <string>
#include <ostream>
#include <istream>

class Style
{
private:
   std::string m_element;
   std::string m_attribute;
   std::string m_value;

public:
   Style(): m_element(""), m_attribute(""), m_value("") {};

   friend std::ostream& operator<<(std::ostream&, const Style&);
   friend std::istream& operator>>(std::istream&, Style&);
};

#endif
