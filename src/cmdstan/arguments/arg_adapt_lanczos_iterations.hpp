#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_LANCZOS_ITERATIONS_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_LANCZOS_ITERATIONS_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_lanczos_iterations: public u_int_argument {
  public:
    arg_adapt_lanczos_iterations(): u_int_argument() {
      _name = "lanczos_iterations";
      _description = "Number of Lanczos iterations to use";
      _default = "1";
      _default_value = 1;
      _value = _default_value;
    }
  };

}
#endif
