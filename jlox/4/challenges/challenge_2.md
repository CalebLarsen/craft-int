- CoffeeScript interesting uses for the space character
  - Indicate an implicit function call
  - A lack of a space can indicate a [tagged template literal](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Template_literals#Tagged_template_literals)
  - Distinguish between operators and XML tags
- Ruby interesting uses for the space character
  - Indicate an implicit function call
    - an example would be `puts(not true)`. This doesn't parse because Ruby is unable to tell if 
      it should be parsed as `puts((not true))` or as `puts(not, true)` (note that the second one is still an error).
- C Preprocessor uses
  - The main use seems to be indicating the end of a macro identifier and parameters and the start of the replacement list
    This space is significant to the bluntness of the macro system. There needs to be a clear cut end and the space character was
    chosen as the delimiter.
