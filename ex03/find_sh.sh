find . -type f -name "*.sh" | rev | cut -f1 -d "/" | rev | cut -f1 -d "."
