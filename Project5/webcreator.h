#ifndef H_WEBCREATOR
#define H_WEBCREATOR

#include <string>
#include <vector>

#include "style.h"
#include "anchor.h"
#include "paragraph.h"
#include "header.h"
#include "textbox.h"
#include "button.h"

class WebCreator
{
private:
   std::vector<Style> m_styleList;
   std::vector<IElement*> m_elementList;
   std::string m_title;

   void ReadStyle(const std::string &stylePath);
   void ReadPage(const std::string &pagePath);
   void BuildPage(const std::string &outputPath);

   void BuildPage();

   std::ostream& OutputHeader(std::ostream&);
   std::ostream& OutputStyles(std::ostream&);
   std::ostream& OutputElements(std::ostream&);
   std::ostream& OutputFooter(std::ostream&);

public:
   WebCreator(const std::string &title): 
      m_styleList(), m_elementList(), m_title(title) {};
   ~WebCreator();

   void ConvertToHtml(const std::string &stylePath, 
      const std::string &pagePath, 
      const std::string &outputPath);
};

#endif
