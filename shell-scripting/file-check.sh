#!/bin/bash
read -p "Enter filename to check: " FILENAME

if [ -e "$FILENAME" ]; then
echo "File '$FILENAME' exists!"
echo "File details:"
ls -l "$FILENAME"
echo "File type:"
file "$FILENAME"
echo "File size:"
du -h "$FILENAME"
else
echo "File '$FILENAME' does not exist."
fi
