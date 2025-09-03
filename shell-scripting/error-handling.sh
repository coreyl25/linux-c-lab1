#!/bin/bash
trap "echo 'Error occurred!'" ERR
ls /nonexistent/directory 2>/dev/null || echo "Directory not found"
