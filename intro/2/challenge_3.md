Lisp is known for its ability to treat [data as code](https://en.wikipedia.org/wiki/Homoiconicity).
Lisp macros depend on this feature. C as a language does not have this capability.
It is in theory possible to allow the processing of these macros in C proper, but it is far easier to express in Lisp.
Thus it is far simpler for the language maintainer to include an interpreter, than it is to build the entire language in C.
