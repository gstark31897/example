#ifndef H_ANCHOR
#define H_ANCHOR

#include "ielement.h"

class Anchor: public IElement
{
private:
   std::string m_href;
   std::string m_text;

public:
   Anchor(): m_href(""), m_text("") {};
   ~Anchor();

   virtual std::ostream& Output(std::ostream&) const;
   virtual std::istream& Input(std::istream&);
};

#endif
