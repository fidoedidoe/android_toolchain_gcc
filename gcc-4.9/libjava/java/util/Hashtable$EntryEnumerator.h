
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Hashtable$EntryEnumerator__
#define __java_util_Hashtable$EntryEnumerator__

#pragma interface

#include <java/lang/Object.h>

class java::util::Hashtable$EntryEnumerator : public ::java::lang::Object
{

public: // actually package-private
  Hashtable$EntryEnumerator(::java::util::Hashtable *);
public:
  virtual jboolean hasMoreElements();
  virtual ::java::util::Map$Entry * Hashtable$EntryEnumerator$nextElement();
  virtual ::java::lang::Object * nextElement();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) count;
  jint idx;
  ::java::util::Hashtable$HashEntry * next;
  ::java::util::Hashtable * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Hashtable$EntryEnumerator__
