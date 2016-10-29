#ifndef H_TEXTBOX
#define H_TEXTBOX

#include "ielement.h"

class Textbox: public IElement
{
private:
   std::string m_name;

public:
   Textbox(): m_name("") {}
   ~Textbox();

   virtual std::ostream& Output(std::ostream&) const;
   virtual std::istream& Input(std::istream&);
};

#endif
