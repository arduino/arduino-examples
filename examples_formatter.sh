# you need to have astyle installed before running this
find examples -regextype posix-extended -regex '.*\.((ino)|(h)|(cpp)|(c))$' -and -type f -exec astyle --options=examples_formatter.conf {} \;
