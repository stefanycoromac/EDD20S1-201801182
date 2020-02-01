
package org.stefanycoromac.beans;


public class Moneda {
        
  private int valor, contar; 
  private String nombre;
  private String[] duenios; 
  
  
  
  public Moneda(String nombre, int valor){
      this.nombre = nombre; 
      this.valor = valor; 
      this.duenios = new String[30]; 
      this.contar = 0; 
  }
  
  public int contar(){
    return this.contar; 
  }
  
  public void transferencia(String duenio){
      for (int i = 0; i < this.duenios.length; i++) {
          if (this.duenios[i] == null) {
              this.duenios[i] = duenio;
              this.contar++; 
              break;               
          }
      }
  }
  
  public String[] getDuenios(){
      return this.duenios; 
  }
  
  public String duenioMonedas(String duenio){
      String monedas = ""; 
      int cantidad = 0; 
        for (int i = 0; i < this.duenios.length; i++) {
            if (this.duenios[i] == duenio) {
                cantidad++; 
            }
      }
      monedas = duenio+" tiene "+cantidad+" "+this.nombre;      
      return monedas; 
  }
  
  public void transferenciaDuenios(String duenioEmisor, String duenioReceptor){
      for (int i = 0; i < this.duenios.length; i++) {
          if (this.duenios[i] == duenioEmisor) {
              this.duenios[i] = duenioReceptor; 
              break; 
         }
      }
  }
 
  
}