# you need to have astyle installed before running this
find \
  examples \
  \( \
    -name '*.c' -or \
    -name '*.cpp' -or \
    -name '*.h' -or \
    -name '*.ino' -or \
    -name '*.ipp' -or \
    -name '*.tpp' \
  \) \
  -type f \
  -exec \
    astyle \
      --options=examples_formatter.conf \
      {} \;
