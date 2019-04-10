#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_WHICH_ADAPTATION_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_WHICH_ADAPTATION_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_which_adaptation: public u_int_argument {
  public:
    arg_adapt_which_adaptation(): u_int_argument() {
      _name = "which_adaptation";
      _description = "Manually select which adaptation to use (run with which_adaptation=0 to see options). Requires adapt_experimental=1";
      _default = "0";
      _default_value = 0;
      _value = _default_value;
    }
  };

}
#endif
