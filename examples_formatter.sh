if ! which astyle &>/dev/null; then
  echo "astyle not found or not in PATH. Please install: https://astyle.sourceforge.net/install.html"
  exit 1
fi

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
