
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_EndElementImpl__
#define __gnu_xml_stream_EndElementImpl__

#pragma interface

#include <gnu/xml/stream/XMLEventImpl.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class EndElementImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
      namespace stream
      {
          class Location;
      }
    }
  }
}

class gnu::xml::stream::EndElementImpl : public ::gnu::xml::stream::XMLEventImpl
{

public: // actually protected
  EndElementImpl(::javax::xml::stream::Location *, ::javax::xml::namespace$::QName *, ::java::util::List *);
public:
  virtual jint getEventType();
  virtual ::javax::xml::namespace$::QName * getName();
  virtual ::java::util::Iterator * getNamespaces();
  virtual void writeAsEncodedUnicode(::java::io::Writer *);
public: // actually protected
  ::javax::xml::namespace$::QName * __attribute__((aligned(__alignof__( ::gnu::xml::stream::XMLEventImpl)))) name;
  ::java::util::List * namespaces;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_EndElementImpl__
