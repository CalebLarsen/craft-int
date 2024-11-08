Python and Haskell have non-regular *lexical* grammars.
Other languages have non-regular parsing grammars (in fact most do), but can
be lexed without any machinery to track tokens arbitrarily far away (i.e. via push-down automata).

What makes Python and Haskell different is that the token that is scanned is dependent on the context of the
tokens around it. In practice, this is usually the whitespace that Python and Haskell are both sensitive to.

