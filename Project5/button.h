#ifndef H_BUTTON
#define H_BUTTON

#include "ielement.h"

class Button: public IElement
{
private:
   std::string m_name;
   std::string m_value;

public:
   Button(): m_name(""), m_value("") {};
   ~Button();

   virtual std::ostream& Output(std::ostream&) const;
   virtual std::istream& Input(std::istream&);
};

#endif
