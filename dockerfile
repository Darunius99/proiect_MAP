# Folosește o imagine de bază cu GCC pentru a compila codul C
FROM gcc:latest

# Setează directorul de lucru
WORKDIR /app

# Copiază sursele din folderul curent în container
COPY . /app

# Compilăm codul C
RUN gcc -o transf_roman transf_roman.c

# Setează comanda care va rula la pornirea containerului
CMD ["./transf_roman"]
