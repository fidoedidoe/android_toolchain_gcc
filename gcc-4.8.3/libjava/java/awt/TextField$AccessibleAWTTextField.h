
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_TextField$AccessibleAWTTextField__
#define __java_awt_TextField$AccessibleAWTTextField__

#pragma interface

#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class TextField;
        class TextField$AccessibleAWTTextField;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleStateSet;
    }
  }
}

class java::awt::TextField$AccessibleAWTTextField : public ::java::awt::TextComponent$AccessibleAWTTextComponent
{

public: // actually protected
  TextField$AccessibleAWTTextField(::java::awt::TextField *);
public:
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
private:
  static const jlong serialVersionUID = 6219164359235943158LL;
public: // actually package-private
  ::java::awt::TextField * __attribute__((aligned(__alignof__( ::java::awt::TextComponent$AccessibleAWTTextComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_TextField$AccessibleAWTTextField__
