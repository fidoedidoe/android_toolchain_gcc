
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CertificateStatusRequest$ResponderIdIterator__
#define __gnu_javax_net_ssl_provider_CertificateStatusRequest$ResponderIdIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CertificateStatusRequest;
              class CertificateStatusRequest$ResponderIdIterator;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CertificateStatusRequest$ResponderIdIterator : public ::java::lang::Object
{

public:
  CertificateStatusRequest$ResponderIdIterator(::gnu::javax::net::ssl::provider::CertificateStatusRequest *);
  virtual JArray< jbyte > * CertificateStatusRequest$ResponderIdIterator$next();
  virtual jboolean hasNext();
  virtual void remove();
  virtual ::java::lang::Object * next();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) index;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::CertificateStatusRequest * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CertificateStatusRequest$ResponderIdIterator__
