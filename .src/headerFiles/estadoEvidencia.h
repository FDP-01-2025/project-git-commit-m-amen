#ifndef ESTADO_EVIDENCIAS_H
 #define ESTADO_EVIDENCIAS_H 
// Por simplicidad, asumimos 2 casos y hasta 10 evidencias por caso 
const int TOTAL_CASOS = 2; const int MAX_EVIDENCIAS_POR_CASO = 10; 
// Esto guarda si la evidencia fue recolectada con éxito (true) o no (false)
 extern bool collectedEvidence[3][10]; // 3 cases, 10 evidences max per case

  #endif