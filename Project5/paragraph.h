#ifndef H_PARAGRAPH
#define H_PARAGRAPH

#include "ielement.h"

class Paragraph: public IElement
{
private:
   std::string m_text;

public:
   Paragraph(): m_text("") {};
   ~Paragraph();

   virtual std::ostream& Output(std::ostream&) const;
   virtual std::istream& Input(std::istream&);
};

#endif
