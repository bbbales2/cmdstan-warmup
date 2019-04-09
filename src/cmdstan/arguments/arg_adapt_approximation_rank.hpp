#ifndef CMDSTAN_ARGUMENTS_ARG_ADAPT_APPROXIMATION_RANK_HPP
#define CMDSTAN_ARGUMENTS_ARG_ADAPT_APPROXIMATION_RANK_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_adapt_approximation_rank: public u_int_argument {
  public:
    arg_adapt_approximation_rank(): u_int_argument() {
      _name = "approximation_rank";
      _description = "Rank of Hessian approximation";
      _default = "1";
      _default_value = 1;
      _value = _default_value;
    }
  };

}
#endif
