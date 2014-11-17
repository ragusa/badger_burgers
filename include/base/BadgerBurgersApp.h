#ifndef BADGER_BURGERSAPP_H
#define BADGER_BURGERSAPP_H

#include "MooseApp.h"

class BadgerBurgersApp;

template<>
InputParameters validParams<BadgerBurgersApp>();

class BadgerBurgersApp : public MooseApp
{
public:
  BadgerBurgersApp(const std::string & name, InputParameters parameters);
  virtual ~BadgerBurgersApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* BADGER_BURGERSAPP_H */
