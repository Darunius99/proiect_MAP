# Proiect: Transformarea numărului zecimal în sitemul de numeratie romane

## Scopul proiectului
Acest proiect are ca scop transformarea unui număr arab (între 1 și 3999) într-un număr roman git.

## Detalii de implementare
Proiectul pe care l-am realizat este în limbajul de programare C. Codul sursă este compilat cu ajutorul GCC și poate fi rulat atât local cât și într-un container Docker.Explicația programului:

    Introducerea unui număr: Se solicită utilizatorului să introducă un număr natural între 1 și 3999. Numărul introdus este stocat în variabila numar folosind funcția scanf.

    Verificarea intervalului valid: După ce utilizatorul a introdus un număr, programul verifică dacă acesta este în intervalul valid (între 1 și 3999). Dacă numărul este mai mic decât 1 sau mai mare decât 3999, se afișează un mesaj de eroare și programul se oprește (returnează 1).

    Conversia în număr roman: După ce s-a verificat validitatea numărului, programul începe conversia numărului zecimal în număr roman. Acesta folosește mai multe bucle while pentru a verifica și scădea valoarea corespunzătoare fiecărui simbol roman:
        "M" pentru 1000
        "CM" pentru 900
        "D" pentru 500
        "CD" pentru 400
        "C" pentru 100
        "XC" pentru 90
        "L" pentru 50
        "XL" pentru 40
        "X" pentru 10
        "IX" pentru 9
        "V" pentru 5
        "IV" pentru 4
        "I" pentru 1

    Fiecare simbol este afișat pe ecran în ordinea corectă, iar valoarea corespunzătoare este scăzută din numărul numar. Programul repetă acest proces până când numărul devine zero.

    Afișarea rezultatului: După ce programul a terminat conversia numărului, se afișează rezultatul final, adică numărul roman corespunzător numărului introdus de utilizator.

## Platforma software utilizată
- Limbaj de programare: C
- Compilator: GCC
- Editor: VS Code
- Docker 

## Instrucțiuni de rulare
docker pull darunius99/transf_roman:v1
docker run darunius99/transf_roman:v1

### Local (fără Docker):
1. Clonați repository-ul:
   git clone https://github.com/Darunius99/transf_roman.git
