#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define t 1000
#define ta 10000
#define tam 100000
#define tama 200000
#define taman 300000
#define tamanh 400000
#define tamanho 500000

void intercala (int *v, int c, int m, int f){
  int w[2 * tamanho];
  int i, j, k;
  i = c;
  j = m;
  k = 0;
  while (i < m && j < f){
      if (v[i] < v[j])
	{
	  w[k] = v[i];
	  i++;
	}else{
	  w[k] = v[j];
	  j++;
	}
      k++;
    }
  while (i < m){
      w[k] = v[i];
      i++;
      k++;
    }
  while (j < f){
      w[k] = v[j];
      k++;
      j++;
    }
  for (i = c; i < f; i++){
      v[i] = w[i - c];
    }
}
void mergesort (int *v, int c, int f){
  int m;
  if (c < f - 1){
      m = (c + f) / 2;
      mergesort (v, c, m);
      mergesort (v, m, f);
      intercala (v, c, m, f);
    }
}

void mergeCres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = i;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void mergeDecres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = t - i;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void mergeEmbara1000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));

    for (i = 0; i < t; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void mergeCres10000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres10000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = ta - i;
    }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeEmbara10000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));

    for (i = 0; i < ta; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void mergeCres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = tam - i ;
    }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC)));
  free(v);
}
void mergeEmbara100000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tam; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void mergeCres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = tama - i ;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeEmbara200000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tama; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void mergeCres300000(){
  int *v;
  int i, n;
  clock_t temp;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = i;
  }
  temp = clock ();
  mergesort(v,0,n);
  temp = clock () - temp;
  printf (" %f ", ((double) temp) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres300000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = taman - i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeEmbara300000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));

    for (i = 0; i < taman; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void mergeCres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = tamanh - i ;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v); 
}
void mergeEmbara400000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void mergeCres500000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanho; 
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeDecres500000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanho;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = tamanho - i;
  }
  tempo = clock ();
  mergesort(v,0,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void mergeEmbara500000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    mergesort(v,0,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}


void troca (int *a, int *b){
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
void selecao (int *v, int n){
  int i, j, maxj, max_valido;
  for (i = 0; i < n; i++){
      max_valido = n - i;
      maxj = 0;
      for (j = 1; j < max_valido; j++){
	    if (v[j] > v[maxj])
	        maxj = j;
	  }
      troca (&v[max_valido - 1], &v[maxj]);
    }
}
void seleCres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = i;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void seleDecres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = t - i;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void seleEmbara1000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));

    for (i = 0; i < t; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
  
}

void seleCres10000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));
    for (i = 0; i < ta; i++){
        v[i] = i;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void seleDecres10000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = ta - i;
    }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleEmbara10000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));

    for (i = 0; i < ta; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void seleCres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = i;
  }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleDecres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = tam - i ;
    }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleEmbara100000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tam; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void seleCres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = i;
    }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleDecres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = tama - i ;
  }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleEmbara200000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tama; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void seleCres300000(){
  int *v;
  int i, n;
  clock_t temp;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = i;
    }
  temp = clock ();
  selecao(v,n);
  temp = clock () - temp;
  printf (" %f ", ((double) temp) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleDecres300000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = taman - i;
  }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleEmbara300000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));

    for (i = 0; i < taman; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void seleCres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleDecres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = tamanh - i ;
  }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v); 
}
void seleEmbara400000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void seleCres500000(){
  int *v;
  int i, n;
  clock_t temp;
  n = tamanho; 
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = i;
  }
  temp = clock ();
  selecao(v,n);
  temp = clock () - temp;
  printf (" %f ", ((double) temp) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleDecres500000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanho;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = tamanho - i;
  }
  tempo = clock ();
  selecao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void seleEmbara500000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    selecao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}


void bolha (int *v, int n){
  int i, j;
  int aux;
  for (i = 0; i < n; i++){
      for (j = 0; j < n - 1 - i; j++){
	    if (v[j] > v[j + 1]){
	        aux = v[j];
	        v[j] = v[j + 1];
	        v[j + 1] = aux;
	    }
	}
    }
}
void bolhaCres1000 (){
  int *v;
  int i, n;
  clock_t tempo;
  n = t;
  v =(int*) malloc (n * sizeof (int));
  for (i = 0; i < t; i++){
      v[i] = i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhadecres1000 (){
  int *v;
  int i, n;
  clock_t tempo;
  n = t;
  v = malloc (n * sizeof (int));
  for (i = 0; i < t; i++){
      v[i] = t - i ;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara1000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));

    for (i = 0; i < t; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres10000 (){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
   printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
   free(v);
}
void bolhadecres10000 (){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = ta - i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara10000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));

    for (i = 0; i < ta; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhadecres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = tam - i ;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);

}
void bolhaEmbara100000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tam; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhadecres200000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tama;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tama; i++){
      v[i] = tama - i ;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara200000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tama; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres300000(){
  int *v;
  int i, n;
  clock_t temp;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = i;
    }
  temp = clock ();
  bolha (v, n);
  temp = clock () - temp;
  printf (" %f ", ((double) temp) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhadecres300000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = taman;
  v = malloc (n * sizeof (int));
  for (i = 0; i < taman; i++){
      v[i] = taman - i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara300000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));

    for (i = 0; i < taman; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);

}
void bolhadecres400000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanh;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanh; i++){
      v[i] = tamanh - i ;
    }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara400000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void bolhaCres500000(){
  int *v;
  int i, n;
  clock_t temp;
  n = tamanho; 
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
  temp = clock ();
  bolha (v, n);
  temp = clock () - temp;
  printf (" %f ", ((double) temp) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhadecres500000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tamanho;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tamanho; i++){
      v[i] = tamanho - i;
  }
  tempo = clock ();
  bolha (v, n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void bolhaEmbara500000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    bolha (v, n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}


void insercao(int *v, int n){
	int i, j, x;
	for(i=1;i<n;i++){
		x = v[i];
		for(j = i - 1; j>=0 && v[j] > x; j--){
			v[j+1] = v[j];
		}
		v[j+1] = x;
	}
}
void inserCres1000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = t;
  v = malloc (n * sizeof (int));
  for (i = 0; i < t; i++){
      v[i] = t-i;
  }
  tempo = clock ();
  insercao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void inserDecres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = t - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara1000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));

    for (i = 0; i < t; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres10000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = ta;
  v = malloc (n * sizeof (int));
  for (i = 0; i < ta; i++){
      v[i] = ta-i;
  }
  tempo = clock ();
  insercao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
    
}
void inserDecres10000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));
    for (i = 0; i < ta; i++){
        v[i] = ta - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara10000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));

    for (i = 0; i < ta; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres100000(){
  int *v;
  int i, n;
  clock_t tempo;
  n = tam;
  v = malloc (n * sizeof (int));
  for (i = 0; i < tam; i++){
      v[i] = tam-i;
  }
  tempo = clock ();
  insercao(v,n);
  tempo = clock () - tempo;
  printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
  free(v);
}
void inserDecres100000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tam; i++){
        v[i] = tam - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara100000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tam; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres200000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tama; i++){
        v[i] =tama- i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserDecres200000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tama; i++){
        v[i] = tama - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara200000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tama; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres300000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));
    for (i = 0; i < taman; i++){
        v[i] =taman- i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserDecres300000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));
    for (i = 0; i < taman; i++){
        v[i] = taman - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara300000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));

    for (i = 0; i < taman; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres400000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanh; i++){
        v[i] = tamanh-i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserDecres400000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanh; i++){
        v[i] = tamanh - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara400000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void inserCres500000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanho; i++){
        v[i] = tamanho-i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserDecres500000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanho; i++){
        v[i] = tamanho - i;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void inserEmbara500000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    insercao(v,n);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}


void trocaquick (int *a, int *b){
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
int separa (int *v, int c, int f){
  int pivo = v[f];
  int j, k;
  j = c;
  for (k = c; k < f; k++){
      if (v[k] <= pivo){
	  trocaquick (&v[k], &v[j]);
	  j++;
	}
    }
  trocaquick (&v[j], &v[f]);
  return j;
}
void quicksort (int *v, int c, int f){
  int pivo;
  if (c < f){
      pivo = separa (v, c, f);
      quicksort (v, c, pivo - 1);
      quicksort (v, pivo + 1, f);
    }
}

void quickCres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres1000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));
    for (i = 0; i < t; i++){
        v[i] = t - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara1000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = t;
    v = malloc (n * sizeof (int));

    for (i = 0; i < t; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres10000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));
    for (i = 0; i < ta; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres10000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));
    for (i = 0; i < ta; i++){
        v[i] = ta - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara10000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = ta;
    v = malloc (n * sizeof (int));

    for (i = 0; i < ta; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres100000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tam; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres100000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tam; i++){
        v[i] = tam - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara100000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tam;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tam; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres200000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tama; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres200000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tama; i++){
        v[i] = tama - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara200000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tama;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tama; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres300000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));
    for (i = 0; i < taman; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres300000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));
    for (i = 0; i < taman; i++){
        v[i] = taman - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara300000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = taman;
    v = malloc (n * sizeof (int));

    for (i = 0; i < taman; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres400000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanh; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres400000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanh; i++){
        v[i] = tamanh - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara400000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanh;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanh; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}

void quickCres500000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanho; i++){
        v[i] = i;
    }       
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickDecres500000(){
    int *v;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));
    for (i = 0; i < tamanho; i++){
        v[i] = tamanho - i;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
void quickEmbara500000(){
    int *v;
    int tmp;
    int i, n;
    clock_t tempo;
    n = tamanho;
    v = malloc (n * sizeof (int));

    for (i = 0; i < tamanho; i++){
      v[i] = i;
    }
    srand ( time(NULL) );
    while(i>0){
      int k = 1 + rand() % (i+1);
      tmp = v[k];
      v[k]= v[i-1];
      v[i-1] = tmp;
      i--;
    }
    tempo = clock ();
    quicksort(v,0,n-1);
    tempo = clock () - tempo;
    printf (" %f ", ((double) tempo) / ((CLOCKS_PER_SEC )));
    free(v);
}
int main () {
  printf("\t\t\t\ttabela Crescente\t\t\t\t\t\t\n");
  printf("-----------------------------------------------------------------------------------------\n");
  printf("Algoritmos|   1000   |  10000   |  100000  |  200000  |  300000  |  400000  |  500000  |\n");
  printf("bolha\t   |");bolhaCres1000();printf("|");bolhaCres10000();printf("|");bolhaCres100000();printf("|");bolhaCres200000();printf("|");bolhaCres300000();printf("|");bolhaCres400000();printf("|");bolhaCres500000();printf("|");
  printf("\ninsercao   |");inserCres1000();printf("|");inserCres10000();printf("|");inserCres100000();printf("|");inserCres200000();printf("|");inserCres300000();printf("|");inserCres400000();printf("|");inserCres500000();printf("|");
  printf("\nselecao    |");seleCres1000();printf("|");seleCres10000();printf("|");seleCres100000();printf("|");seleCres200000();printf("|");seleCres300000();printf("|");seleCres400000();printf("|");seleCres500000();printf("|");
  printf("\nmergesort  |");mergeCres1000();printf("|");mergeCres10000();printf("|");mergeCres100000();printf("|");mergeCres200000();printf("|");mergeCres300000();printf("|");mergeCres400000();printf("|");mergeCres500000();printf("|");
  printf("\nquicksort  |");quickCres1000();printf("|");quickCres10000();printf("|");quickCres100000();printf("|");quickCres200000();printf("|");quickCres300000();printf("|");quickCres400000();printf("|");quickCres500000();printf("|");printf("\n");
  printf("-----------------------------------------------------------------------------------------\n\n");
  
  printf("\t\t\t\ttabela Decrescente\t\t\t\t\t\t\n");
  printf("-----------------------------------------------------------------------------------------\n");
  printf("Algoritmos|   1000   |  10000   |  100000  |  200000  |  300000  |  400000  |  500000  |\n");
  printf("bolha\t   |");bolhadecres1000();printf("|");bolhadecres10000();printf("|");bolhadecres100000();printf("|");bolhadecres200000();printf("|");bolhadecres300000();printf("|");bolhadecres400000();printf("|");bolhadecres500000();printf("|");
  printf("\ninsercao   |");inserDecres1000();printf("|");inserDecres10000();printf("|");inserDecres100000();printf("|");inserDecres200000();printf("|");inserDecres300000();printf("|");inserDecres400000();printf("|");inserDecres500000();printf("|");
  printf("\nselecao    |");seleDecres1000();printf("|");seleDecres10000();printf("|");seleDecres100000();printf("|");seleDecres200000();printf("|");seleDecres300000();printf("|");seleDecres400000();printf("|");seleDecres500000();printf("|");
  printf("\nmergesort  |");mergeDecres1000();printf("|");mergeDecres10000();printf("|");mergeDecres100000();printf("|");mergeDecres200000();printf("|");mergeDecres300000();printf("|");mergeDecres400000();printf("|");mergeDecres500000();printf("|");
  printf("\nquicksort  |");quickDecres1000();printf("|");quickDecres10000();printf("|");quickDecres100000();printf("|");quickDecres200000();printf("|");quickDecres300000();printf("|");quickDecres400000();printf("|");quickDecres500000();printf("|");
  printf("\n-----------------------------------------------------------------------------------------\n\n");
  
  printf("\t\t\t\ttabela Embaralhado\t\t\t\t\t\t\n");
  printf("-----------------------------------------------------------------------------------------\n");
  printf("Algoritmos|   1000   |  10000   |  100000  |  200000  |  300000  |  400000  |  500000  |\n");
  printf("bolha\t   |");bolhaEmbara1000();printf("|");bolhaEmbara10000();printf("|");bolhaEmbara100000();printf("|");bolhaEmbara200000();printf("|");bolhaEmbara300000();printf("|");bolhaEmbara400000();printf("|");bolhaEmbara500000();printf("|");
  printf("\ninsercao   |");inserEmbara1000();printf("|");inserEmbara10000();printf("|");inserEmbara100000();printf("|");inserEmbara200000();printf("|");inserEmbara300000();printf("|");inserEmbara400000();printf("|");inserEmbara500000();printf("|");
  printf("\nselecao    |");seleEmbara1000();printf("|");seleEmbara10000();printf("|");seleEmbara100000();printf("|");seleEmbara200000();printf("|");seleEmbara300000();printf("|");seleEmbara400000();printf("|");seleEmbara500000();printf("|");
  printf("\nmergesort  |");mergeEmbara1000();printf("|");mergeEmbara10000();printf("|");mergeEmbara100000();printf("|");mergeEmbara200000();printf("|");mergeEmbara300000();printf("|");mergeEmbara400000();printf("|");mergeEmbara500000();printf("|");
  printf("\nquicksort  |");quickEmbara1000();printf("|");quickEmbara10000();printf("|");quickEmbara100000();printf("|");quickEmbara200000();printf("|");quickEmbara300000();printf("|");quickEmbara400000();printf("|");quickEmbara500000();printf("|");
  printf("\n-----------------------------------------------------------------------------------------\n\n");
  
  return 0;
}

