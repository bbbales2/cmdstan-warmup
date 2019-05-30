library(MASS)
library(brms)
library(rstan)

code = make_stancode(formula = bf(accel ~ gp(times, k=40, c=3/2), sigma ~ gp(times, k=20, c=3/2)), data=mcycle)
data = make_standata(formula = bf(accel ~ gp(times, k=40, c=3/2), sigma ~ gp(times, k=20, c=3/2)), data=mcycle)

write(code, "accel_gp.stan")
stan_rdump(names(data), "accel_gp.dat", envir = list2env(data))
