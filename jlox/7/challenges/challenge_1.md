The only additional comparison I would consider supporting is between strings.
It could be used to lexicographically sort strings, i.e. 'a' < 'b'. However, even writing
this out makes me feel uneasy about the idea. I don't believe that overloading operators
leads to clarity in most cases. There are a few exceptions (vector addition, maybe string concatenation)
but in most of my experience, it is simply an obscured function call that is more difficult to chase down.

C allows far more comparisons than I knew. For example, you can compare addresses of members of a struct.
You can also compare pointers to elements of an array and it will compare by index into the array.


Python allows for comparisons between strings using lexicographical ordering.

Go allows for string comparisons like Python.

Languages like Ruby, Haskell, Python, C++, and Java all allow you to write your own functions for comparison.
Haskell does so through typeclasses and the others do so through operator overloading.
