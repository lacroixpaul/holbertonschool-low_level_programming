#!/bin/bash

# Vérifie que le fichier a compiler est fourni en argument
if [ -z "$1" ]; then
  echo "Usage: $0 <nom_du_fichier.c>"
  exit 1
fi

# Extrait le nom de fichier sans extension
fichier_source="$1"
nom_sortie="${fichier_source%.*}"

# Compile le fichier avec les options spécifiées
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.h main.c "$fichier_source" -o "$nom_sortie"

# Vérifie si la compilation a réussi
if [ $? -eq 0 ]; then
  echo "Compilation réussie. Exécutable créé : $nom_sortie"
else
  echo "Échec de la compilation."
fi
