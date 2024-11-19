Currently 0/0 yields 'NaN'. I believe it should fail to execute since division by 0 is 
considered an illegal operation on the type and because it is the behavior I expect to happen.

C fails in integer division by 0 and yields undefined behavior in floating point division by 0. In practice it seems to give positive Infinity.

Python throws a 'ZeroDivisionError' exception.

Go panics if the runtime detects a division by 0.

Rust panics on division by 0.

Haskell works like C, failing on integer division by 0 and giving positive Infinity for floating-point division.

Java gives Infinity for 1.0 / 0.0, and NaN for 0.0 / 0.0. Integer division throws an exception.

Javascript works like Java, but has no integer type.

After reviewing a few popular languages, I believe I was wrong in expecting a floating point division by 0 to
crash the program. It seems that most languages use the floating point standard's definition of Infinity or NaN
instead of failure. Integer division by 0 seems to universally fail since there is no Infinity or NaN value available.
Go and Rust stand out by still failing. I believe these languages chose their path by wanting to be languages
that dealt with errors very seriously and believe that division by 0 should never be allowed (even if the standard disagrees).
