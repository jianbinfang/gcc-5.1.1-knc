
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming_BindingHelper__
#define __org_omg_CosNaming_BindingHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace CosNaming
      {
          class Binding;
          class BindingHelper;
      }
    }
  }
}

class org::omg::CosNaming::BindingHelper : public ::java::lang::Object
{

public:
  BindingHelper();
  static ::org::omg::CosNaming::Binding * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::CosNaming::Binding *);
  static ::org::omg::CosNaming::Binding * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::CosNaming::Binding *);
private:
  static ::java::lang::String * _id;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming_BindingHelper__
