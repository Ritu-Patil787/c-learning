Workflow Guide

This document explains how to:
Create a diff branch
# Make sure you're on main
git checkout main

# Pull latest changes
git pull origin main

# Create a new branch
git checkout -b feature/parser-analyzer

Make a Pull Request (PR)
git add .
git commit -m "Add parser and analyzer modules"
git push origin feature/parser-analyzer

Follow the required folder structure
├── Parser/
│   └── parser.c
│
├── analyzer/
│   └── analyzer.c
│
└── README.md
