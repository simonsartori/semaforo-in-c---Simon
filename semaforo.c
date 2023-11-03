int setSemP(int rosso), setSemV(int verde);

int main() {
  char input;
  int rosso, giallo, verde;
  
  
  while (1) {
    
    system("clear");
    setSemP(rosso);
    setSemV(verde);
    
    printf("Premi p per accendere il semaforo \n");
    scanf(" %c", &input);

  


    system("clear");
    setSemP(rosso);
    setSemV(giallo);

    system("clear");
    setSemP(verde);
    setSemV(rosso);

    sleep(10);
    system("clear");
  
  }
}
