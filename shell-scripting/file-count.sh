#!/bin/bash
if [ $# -eq 0 ]; then
DIR="."
else
DIR="$1"
fi

if [ ! -d "$DIR" ]; then
echo "Error: '$DIR' is not a valid directory"
exit 1
fi

echo "File count analysis for directory: $DIR"
echo "=====================================Countingfiles)"
echo "Date: $(date)"
echo ""

txt_count=$(find "$DIR" -name "*.txt" -type f 2>/dev/null | wc -l)
sh_count=$(find "$DIR" -name "*.sh" -type f 2>/dev/null | wc -l)
total_files=$(find "$DIR" -type f 2>/dev/null | wc -l)
total_dirs=$(find "$DIR" -type d 2>/dev/null | wc -l)

echo "Text files (.txt): $txt_count"
echo "Shell scripts (.sh): $sh_count"
echo "Total files: $total_files"
echo "Total directories: $total_dirs"
echo ""
echo "File details:"
echo "============="
ls -la "$DIR"

{
echo "$(date): Directory scan of $DIR"
echo "Text files: $txt_count, Shell scripts: $sh_count, Total files: $total_files"
} >> file-count.log
