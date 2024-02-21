#include <stdlib.h>
#include <iostream>
#include <string>

// declaração das variáveis a serem usadas nesse teste
using namespace std;
int main(){
  FILE *fp;
  fp = fopen("C:\\Users\\Arauj\\20210106_111916.jpg", "rb");
  fclose(fp);
}