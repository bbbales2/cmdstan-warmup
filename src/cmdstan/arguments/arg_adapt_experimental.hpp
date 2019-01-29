#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_EXPERIMENTAL_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_EXPERIMENTAL_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_experimental: public bool_argument {
  public:
    arg_adapt_experimental(): bool_argument() {
      _name = "experimental";
      _description = "Engage experimental adaptation";
      _validity = "[0, 1]";
      _default = "0";
      _default_value = 0;
      _constrained = true;
      _good_value = 0;
      _value = _default_value;
    }
  };

}
#endif
