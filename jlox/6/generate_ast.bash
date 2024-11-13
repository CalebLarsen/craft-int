#!/bin/bash

mkdir -p caleb-build
javac -d caleb-build/ app/src/main/java/com/craftinginterpreters/tool/GenerateAst.java
java -cp caleb-build com.craftinginterpreters.tool.GenerateAst app/src/main/java/com/craftinginterpreters/lox
