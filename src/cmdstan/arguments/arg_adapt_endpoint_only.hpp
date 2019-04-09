#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_ENDPOINT_ONLY_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_ENDPOINT_ONLY_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_endpoint_only: public bool_argument {
  public:
    arg_adapt_endpoint_only(): bool_argument() {
      _name = "endpoint_only";
      _description = "Use only the endpoint in each warmup phase for experimental adaptation?";
      _validity = "[0, 1]";
      _default = "0";
      _default_value = false;
      _constrained = false;
      _good_value = 0;
      _value = _default_value;
    }
  };

}
#endif
