#ifndef BADGER_APP_H
#define BADGER_APP_H

#include "MooseApp.h"

class BadgerApp;

template<>
InputParameters validParams<BadgerApp>();

class BadgerApp : public MooseApp
{
public:
  BadgerApp(const std::string & name, InputParameters parameters);
  virtual ~BadgerApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* BADGER_APP_H */
