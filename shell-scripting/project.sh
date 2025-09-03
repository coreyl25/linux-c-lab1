#!/bin/bash

# Project automation script for C programs
# This script compiles and runs the contacts program, creates backups, and logs output

echo "Starting project automation..."

# Step 1: Compile the contacts program
echo "Compiling contacts.c..."
gcc ../c-program/contacts.c -o contacts

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed!"
    exit 1
fi

# Step 2: Run the contacts program (this will start the interactive program)
echo "Running contacts program..."
./contacts

# Step 3: Create backup of c-programs directory
echo "Creating backup..."
tar -czf contacts-backup.tar.gz ../c-program/*

# Step 4: Log the output with timestamp
echo "Output logged at $(date)" >> project-log.txt

echo "Project automation completed successfully!"
echo "Check project-log.txt for execution log"
echo "Backup created as contacts-backup.tar.gz"
