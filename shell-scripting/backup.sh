#!/bin/bash
tar -czf backup.tar.gz *.txt 2>/dev/null
if [ $? -eq 0 ]; then
echo "Backup created successfully: backup.tar.gz"
else
echo "No .txt files found to backup"
fi
