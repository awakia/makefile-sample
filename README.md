# Makefile Sample

This project includes sample c++ programs and it's makefile.

The makefile enables you to add a set of new c++ files easily.

A set of c++ files means the source and its header and its tests, say,
- hoge.cc
- hoge.h
- hoge_test.cc

This project use [gtest](https://code.google.com/p/googletest/) as a test framework and follow [Google C++ Style Guide](http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml)

## References

### General Make Manual
- http://www.gnu.org/software/make/manual/html_node/General-Search.html#General-Search

### About Macros (e.g., $@, $^, $?, $<)
- http://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html#Automatic-Variables

### About Subtitution References (e.g., $(@:.cc=.o))
- http://www.gnu.org/software/make/manual/html_node/Text-Functions.html#Text-Functions
- http://www.gnu.org/software/make/manual/html_node/Substitution-Refs.html#Substitution-Refs

### About VPATH
- http://www.gnu.org/software/make/manual/html_node/General-Search.html#General-Search

### About defining function especially foreach & eval
- http://www.gnu.org/software/make/manual/html_node/Functions.html#Call-Function
- http://stackoverflow.com/questions/1963802/makefile-pattern-rules-and-directories
- http://stackoverflow.com/questions/9691508/how-can-i-use-macros-to-generate-multiple-makefile-targets-rules-inside-foreach