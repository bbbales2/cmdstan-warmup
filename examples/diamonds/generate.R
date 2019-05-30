library(tidyverse)
library(ggplot2)
library(brms)
library(rstan)

data("diamonds", package = "ggplot2")
diamonds_reduced = diamonds %>% filter(z > 0) %>% sample_n(5000)

code = make_stancode(log(price) ~ carat * (log(x) + log(y) + log(z)) + cut + color + clarity,
                     data = diamonds_reduced, prior = prior(normal(0.0, 1)))

data = make_standata(log(price) ~ carat * (log(x) + log(y) + log(z)) + cut + color + clarity,
                     data = diamonds_reduced)

write(code, "diamonds.stan")
stan_rdump(names(data), file="diamonds.dat", env = list2env(data))
