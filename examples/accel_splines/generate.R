library(MASS)
library(brms)
library(rstan)

code = make_stancode(formula = bf(accel ~ s(times, k=40), sigma ~ s(times, k=40)), data = mcycle)
data = make_standata(formula = bf(accel ~ s(times, k=40), sigma ~ s(times, k=40)), data = mcycle)

write(code, "accel_splines.stan")
stan_rdump(names(data), "accel_splines.dat", envir = list2env(data))
