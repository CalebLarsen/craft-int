I still have questions about variable shadowing and what is accepted by the language.

Are these valid? What happens?
  - var a = 1;
    var a = 2;
    print a;
  - var a = 1;
    {
      var a = 2;
      print a;
    }
    print a;
  - fun a() {
      var a = 1;
      print a;
    }
  - fun a() {
      print a;
    }

How do you check if a property exists?
How do you check the type of a variable?
