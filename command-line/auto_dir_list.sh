#!/bin/bash
echo "=== Directory Listing Script ==="
echo "Current directory: $(pwd)"
echo "Date: $(date)"
echo ""
echo "Files and directories:"
ls -la
echo ""
echo "Directory tree structure:"
tree -a 2>/dev/null || echo "Tree command not available, using ls -R:"
ls -R 2>/dev/null
