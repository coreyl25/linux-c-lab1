#!/bin/bash
ARGS=("$@")
echo "First arg: ${ARGS[0]}"
echo "All arguments:"
for arg in "$@"; do
echo "$arg"
done
