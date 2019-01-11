#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_EXPERIMENTAL_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_EXPERIMENTAL_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_experimental: public int_argument {
  public:
    arg_adapt_experimental(): int_argument() {
      _name = "experimental";
      _description = "Number of Lanczos vectors to adapt";
      _validity = "0 <= experimental";
      _default = "0";
      _default_value = 0;
      _constrained = true;
      _good_value = 1;
      _bad_value = -1;
      _value = _default_value;
    }

    bool is_valid(int value) { return value >= 0; }
  };

}
#endif
