#ifndef H_HEADER
#define H_HEADER

#include "ielement.h"

class Header: public IElement
{
private:
   std::string m_text;
   int m_headerLevel;

public:
   Header(): m_text(""), m_headerLevel(-1) {};
   ~Header();

   virtual std::ostream& Output(std::ostream&) const;
   virtual std::istream& Input(std::istream&);
};

#endif
