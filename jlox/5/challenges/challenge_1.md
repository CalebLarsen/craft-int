Initial Expression:
expr -> expr ( "(" ( expr ( "," expr )* )? ")" | "." IDENTIFIER )+
      | IDENTIFIER
      | NUMBER

1. Separate Alternatives
expr -> expr ( "(" ( expr ( "," expr )* )? ")" | "." IDENTIFIER )+
expr -> IDENTIFIER
expr -> NUMBER

2. Remove '+'
expr -> expr access
expr -> IDENTIFIER
expr -> NUMBER

access -> "(" ( expr ( "," expr )* )? ")" | "." IDENTIFIER
access -> access access

3. Separate alternatives
expr -> expr access
expr -> IDENTIFIER
expr -> NUMBER

access -> "(" ( expr ( "," expr )* )? ")"
access -> "." IDENTIFIER
access -> access access

4. Remove '?'
expr -> expr access
expr -> IDENTIFIER
expr -> NUMBER

access -> "(" parameters ")"
access -> "." IDENTIFIER
access -> access access

parameters -> expr ( "," expr)*
parameters ->

5. Remove '*'
expr -> expr access
expr -> IDENTIFIER
expr -> NUMBER

access -> "(" parameters ")"
access -> "." IDENTIFIER
access -> access access

parameters -> expr parameter
parameters ->

parameter -> expr
parameter -> expr "," parameter
