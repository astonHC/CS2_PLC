module Fib where

calcFib :: Integer -> Integer
calcFib 0 = 0
calcFib 1 = 1
calcFib n = calcFib (n - 1) + calcFib (n - 2)