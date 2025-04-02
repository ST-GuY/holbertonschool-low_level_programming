#!/bin/bash

# Vérifier si $CFILE est défini
if [ -z "$CFILE" ]; then
    echo "Erreur : La variable CFILE n'est pas définie."
    exit 1
fi

# Extraire le nom du fichier sans extension
OUTPUT_FILE="${CFILE%.c}.s"

# Compiler uniquement jusqu'à l'assemblage (-S) et générer le fichier .s
gcc -S "$CFILE" -o "$OUTPUT_FILE"

echo "Compilation terminée : $OUTPUT_FILE généré."

