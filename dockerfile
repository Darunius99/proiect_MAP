# Imaginea de bază cu compilatorul GCC
FROM gcc:latest

# Setează directorul de lucru în container
WORKDIR /app

# Copiază fișierul sursă în container
COPY transf_roman.c .

# Compilează codul sursă în fișierul executabil
RUN gcc -o transf_roman transf_roman.c

# Comanda implicită pentru rularea aplicației
CMD ["./transf_roman"]
