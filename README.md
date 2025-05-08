AUTORI: Talbi Adam, Emanuele Pasquale, Salimbene Leonardo

# Studio-legale
Progetto conclusivo conseguenze e comprensione competenze programmazione strutturata con linguaggio imperativo

OBBIETTIVO: 

Progettare un programma in linguaggio C (C++ solo per input/output) per la gestione degli appuntamenti giornalieri di uno studio legale. Gli appuntamenti devono essere memorizzati in un file binario, ordinati durante la giornata e aggiornati alla chiusura con i risultati (servito / mancato). Il progetto dovrà prevedere la suddivisione del codice in moduli e l’uso di una libreria statica.

DATI DA GESTIRE:

  Ogni appuntamento è descritto da:
  Codice univoco (progressivo);
  
  
  Cognome e nome del cliente;
  
  
  Numero di telefono;
  
  
  Giorno e mese dell'appuntamento;
  
  
  Orario dell’appuntamento (intero da 9 a 19, senza minuti);
  
  
  Stato dell'appuntamento: 0 = non ancora servito, 1 = servito.


FILE DA UTILIZZARE: 

  archivio.dat: file binario degli appuntamenti futuri;
  
  
  appuntamenti_serviti.txt: clienti serviti nella giornata;
  
  
  appuntamenti_mancati.txt: clienti non serviti nella giornata.

FUNZIONALITA' RICHIESTE: 

  All’avvio, il programma riceve da riga di comando il nome del file archivio (archivio.dat). Se il file non esiste, deve essere creato.


Il programma offre un menu con le seguenti opzioni:
  
  
  Aggiungere un nuovo appuntamento (con codice generato automaticamente);
  
  
  Modificare un appuntamento esistente (ricercato tramite codice);
  
  
  Gestire la giornata odierna (visualizzare e gestire appuntamenti del giorno).
  

Durante la giornata:

  
  Caricare gli appuntamenti del giorno in una lista dinamica;
  
  
  Ordinare la lista in base all’orario di appuntamento;
  
  
  Per ogni cliente, chiedere alla segretaria se è stato servito o mancato;
  
  
  Aggiornare i file serviti.txt e mancati.txt con i dati corretti.
  

Alla chiusura:
  
  
  Generare il nuovo archivio.dat contenente solo gli appuntamenti futuri o odierni non serviti.
  Vincoli e facilitazioni
  L’archivio è annuale: si gestiscono solo mese e giorno (no anno);
  
  
  Gli orari vanno dalle 9:00 alle 19:00 senza minuti;
  
  
  Gli studenti possono usare funzioni d’appoggio per ordinamento e gestione file;
  

I dati devono essere strutturati tramite struct.
Estensione obbligatoria: libreria statica
Il progetto deve includere una libreria statica personale (.a) contenente le funzioni fondamentali per la gestione degli appuntamenti.
Funzioni da inserire nella libreria:
Creazione e aggiornamento dei file binari e di testo;


Caricamento degli appuntamenti in lista dinamica;


Ordinamento degli appuntamenti in base all’orario;


Ricerca e modifica di un appuntamento;


Gestione della fine giornata e aggiornamento dei file.

