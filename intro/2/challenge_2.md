Reasons not to JIT compile
  - Complex: far more complicated than a tree-walking interpreter, or even a VM
  - Potentially Insecure: Writing then executing is tricky to get correct, and potentially allows malicious input to be converted into executable code. See [W^X](https://en.wikipedia.org/wiki/W^X)
  - Loss of portability: Since you are required to give machine code, you are limited by your ability to support new systems
  - Requires knowledge of machine code: Every new domain of expertise required is more resources demanded on the producers of the language. For many languages, it is not feasible to have the personnel to create an efficient JIT runtime
